#include "ft_stock_str.h"

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
		num = -num;
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

void	ft_show_tab(struct s_stock_str *par)
{
	int		i;

	i = 0;
	if (par)
	{
		while (par->str)
		{
			while(par->str[i])
				ft_putchar(par->str[i++]);
			ft_putchar('\n');
			ft_putnbr(i);
			ft_putchar('\n');
			i = 0;
			while (par->copy[i])
				ft_putchar(par->copy[i++]);
			ft_putchar('\n');
			i = 0;
			par++;
		}
	}
}