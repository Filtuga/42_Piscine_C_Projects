#include <unistd.h>

void	ft_foreach(int *tab, int length, void(*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
		f(tab[i++]);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	num = nb;
	
	if (num < 0)
	{
		ft_putchar('-');
		num *= -1;
		ft_putnbr(num);
	}
	else if (num > 9)
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
	else
		 ft_putchar(num + 48);
}
/*
int	main(void)
{
	int	arr[10] = {1, 6, 3, 7, 8, 4, 2, 1, 3};
	ft_foreach(arr, 9, &ft_putnbr)	;
	write(1, "\n", 1);
	return 0;
}*/
