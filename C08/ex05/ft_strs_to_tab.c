#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	char	*result;

	result = dest;
	while (*src != 0)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = 0;
	return result;
}

void	ft_fill_strs_in_struct(int ac, char **av, struct s_stock_str *buffer)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (av[i] && i < ac)
	{
		buffer[j].str = ft_strcpy(buffer[j].str, av[i]);
		buffer[j].copy = ft_strcpy(buffer[j].str, av[i]);
		i++;
		j++;
	}
	buffer[j].str = 0;
	buffer[j].copy = 0;
}


void	ft_alloc_strs(int ac, char **av, struct s_stock_str *arr)
{
	int		i;
	int		j;
	int		x;

	i = 0;
	j = 0;
	x = 0;
	while (arr && i < ac)
	{
		while(av[i][j])
			j++;
		arr[x].str = malloc(sizeof(char) * j + 1);
		if (!arr[x].str)
			return;
		arr[x].copy = malloc(sizeof(char) * j + 1);
		if (!arr[x].copy)
			return;
		j = 0;
		i++;
		x++;
	}
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str *arr;

	arr = NULL;
	if (ac < 1)
		return arr;
	arr = malloc(sizeof(struct s_stock_str) * ac + 1);	
	if (!arr)
		return (arr = NULL);
	ft_alloc_strs(ac, av, arr);
	ft_fill_strs_in_struct(ac, av, arr);
	return arr;
}