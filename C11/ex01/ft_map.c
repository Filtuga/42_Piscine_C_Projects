#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	*return_arr;
	int	i;

	i = 0;
	return_arr = malloc(sizeof(int) * length + 1);
	if (!return_arr)
		return (0);
	while (i < length && tab[i])
	{
		return_arr[i] = f(tab[i]);
		i++;
	}
	return (return_arr);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_add_1(int nb)
{
	return (nb + 1);
}

int	main(void)
{
	int	arr[10] = {1, 6, 3, 7, 8, 4, 2, 1, 3};
	
	int	*new_arr = ft_map(arr, 9, &ft_add_1);
	printf("new arr: ");
	for (int i = 0; i < 9; i++)
		printf(" %d", new_arr[i]);
	printf("\n");
	return 0;
}
