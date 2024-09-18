#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

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

int	ft_atoi(char *str)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result *= 10;
		result += *str - 48;
		str++;
	}
	result *= sign;
	return (result);
}

int	ft_read_1st_value(char *str)
{
	int	result;

	if (!(*str >= '0' && *str <= '9'))
		return 0;
	result = ft_atoi(str);	
	return (result);
}

int	ft_add(int value, int value2)
{
	return (value + value2);
}

int	ft_multiply(int value, int value2)
{
	return (value * value2);
}

int	ft_subtract(int value, int value2)
{
	if (value2 < 0)
		return (value + (value2 * -1));
	return (value - value2);
}

int	ft_divide(int value, int value2)
{
	return (value / value2);
}

int	ft_modulo(int value, int value2)
{
	return (value % value2);
}

int	(*arr[6]) (int value, int value2);

void	ft_create_array_operations()
{
	arr[0] = ft_add;
	arr[1] = ft_multiply;
	arr[2] = ft_subtract;
	arr[3] = ft_divide;
	arr[4] = ft_modulo;
	arr[5] = NULL;
}

int	ft_operand_is_valid(char *op)
{
	if (op[1] != 0)
		return (0);
	if (op[0] == '+' || op[0] == '-' || op[0] == '*'
		|| op[0] == '/' || op[0] == '%')
		return (1);
	return (0);
}

int	ft_calculate(int value, char op, int value2)
{
	int	result;

	result = 0;
	if (op == '/' && value2 == 0)
		return (-1);
	else if (op == '%' && value2 == 0)
		return (-2);
	else if (op == '+')
		result = (*arr[0]) (value, value2);
	else if (op == '*')
		result = (*arr[1]) (value, value2);
	else if (op == '-')
		result = (*arr[2]) (value, value2);
	else if (op == '/')
		result = (*arr[3]) (value, value2);
	else if (op == '%')
		result = (*arr[4]) (value, value2);
	return (result);
}

int	ft_do_op(char **argv)
{
	int	first_val;
	int	second_val;
	int	result;

	first_val = ft_read_1st_value(argv[1]);
	second_val = ft_atoi(argv[3]);
	ft_create_array_operations();
	if (!ft_operand_is_valid(argv[2]))
		return (0);
	result = ft_calculate(first_val, argv[2][0], second_val);
	return (result);
}


int	main(int argc, char **argv)
{
	int	result;

	if (argc != 4)
		return 0;

	result = ft_do_op(argv);
	if (result == -1)	
		write(1, "Stop : division by zero", 24);
	else if (result == -2)
		write(1, "Stop : modulo by zero", 22);
	else if (result == 0)
	{
		write(1, "0\n", 2);
		return (0);
	}
	else
		ft_putnbr(result);
	write(1, "\n", 1);
	return (0);
}
