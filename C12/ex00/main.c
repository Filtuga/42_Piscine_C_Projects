#include "ft_list.h"
#include <stdio.h>

void	ft_display_elem(t_list *element)
{
	if (element)
		printf("element data: %s\n", element->data);
	else
		printf("Something went wrong..\n");
}

int	main()
{
	t_list *p;
	p = ft_create_elem("ola");
	ft_display_elem(p);
}