#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_alloc_strs_with_sep(int	size, char **strs, char *sep)
{
	char	*result;
	int		sep_len;
	int		strs_len;
	int		i;
	i = 0;
	strs_len = 0;
	sep_len = ft_strlen(sep);
	result = 0;
	while (strs[i])
	{
		strs_len += ft_strlen(strs[i]);
		i++;
	}
	if (!size)
	{
		result = malloc(sizeof(char) + 2);
		result[0] = '0';
		result[1] = 0;
		return result;	
	}
	result = malloc(sizeof(char) * strs_len + (sep_len * (size - 1)) + 1);
	return result;
}

void	ft_fill_str(int size, char** strs, char * sep, char *result)
{
	int		i;
	int		j;
	int		x;
	int		y;

	i = 0;
	j = 0;
	x = 0;
	y = 0;
	while (strs[i])
	{
		while (strs[i][j])
			result[x++] = strs[i][j++];
		j = 0;
		if (i == size - 1)
			return;
		while (sep[y])
			result[x++] = sep[y++];
		y = 0;
		i++;
	}
	result[x] = 0;
}

char	*ft_str_join(int size, char **strs, char *sep)
{
	char *result;

	result = ft_alloc_strs_with_sep(size, strs, sep);
	if (!result || (result[0] == '0' && result[1] == 0))
		return result;

	ft_fill_str(size, strs, sep, result);
	return result;
}