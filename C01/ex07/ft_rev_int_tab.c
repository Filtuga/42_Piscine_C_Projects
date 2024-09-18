#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int		temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int		i = 0;
	int		j = size - 1;

	while (i < (size / 2))
	{
		ft_swap(&tab[i], &tab[j]);
		i++;
		j--;
	}
}
/*
int		main()
{
	int arr[10];
	for (int i = 0; i < 10; i++)
		arr[i] = i + 1;

	ft_rev_int_tab(arr, 10);

	for (int i = 0; i < 10; i++)
		printf("arr[%d] -> %d\n", i, arr[i]);
}
*/