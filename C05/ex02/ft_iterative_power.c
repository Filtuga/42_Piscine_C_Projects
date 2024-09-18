#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	n;

	n = nb;
	if (power < 0)
		return 0;
	if (power == 0)
		return 1;
	while (power-- > 1)
		nb *= n;
	return (nb);
}

int	main()
{
	printf("Final: %d\n", ft_iterative_power(0, 0));
	return 0;
}
