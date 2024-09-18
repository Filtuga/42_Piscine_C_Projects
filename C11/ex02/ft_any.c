#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_any(char **tab, int(*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (f(tab[i]))
			return (1);
		i++;
	}
	return (0);
}

int	ft_has_char_uppercase(char *str)
{
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			printf("uppercase char: %c\n", *str);
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
	int	i = 0;
	int	result = 0;

	char **arr = malloc(sizeof(char *) * 3);
	arr[0] = "hello";
	arr[1] = " my name is ";
	arr[2] = NULL;

	result = ft_any(arr, ft_has_char_uppercase);
	if (result)
		printf("has uppercase\n");
	else
		printf("does NOT have uppercase\n");

	return 0;
}
