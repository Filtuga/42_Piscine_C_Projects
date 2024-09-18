#include "ft_stock_str.h"

int		main(int argc, char **argv)
{
	struct s_stock_str *p;
	
	p = ft_strs_to_tab(argc - 1, &argv[1]);
	if (p)
	{
		while (p->str)
		{
			printf("Current str: %s | and its copy: %s\n", p->str, p->copy);
			p++;
		}
	}
	else
		printf("Something went wrong");
}