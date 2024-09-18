#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_count_if(char **tab, int length, int(*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (tab[i] && i < length)
	{
		if (f(tab[i]))
			count++;
		i++;
	}
	return (count);
}

int	ft_has_char_uppercase(char *str)
{
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			return (1);
		}
		str++;
	}
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	int	result = 0;

	char **arr = malloc(sizeof(char *) * 3);
	arr[0] = "Hello";
	arr[1] = " my nAme is ";
	arr[2] = NULL;

	result = ft_count_if(arr, 5, ft_has_char_uppercase);
	if (result)
		printf("Total count of strings with uppercase letters: %d\n", result);
	else
		printf("Zero count of strings with uppercase letters...\n");

	return 0;
}
