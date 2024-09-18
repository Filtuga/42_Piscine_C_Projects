#include <stdio.h>

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	is_sorted;
	int	i;

	is_sorted = 0;
	i = 0;
	while (tab[i] && i < length)
	{
		if ((*f)(tab[i], tab[i + 1]) < 0 || (*f)(tab[i], tab[i + 1]) == 0)
			is_sorted = 1;
		else
		{
			is_sorted = 0;
			return (is_sorted);
		}
		i++;
	}
	return (is_sorted);
}

int	ft_num_minus_num(int nb, int nb2)
{
	return (nb - nb2);
}

int	main(void)
{
	int	arr[10] = {1, 2, 7, 4, 5, 6, 7, 8, 9};
	int	result = ft_is_sort(arr, 10, ft_num_minus_num);
	if (result)
		printf("Array is sorted.\n");
	else
		printf("Not sorted.\n");
	return 0;
}
