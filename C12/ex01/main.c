#include "ft_list.h"

void	ft_display_elem(t_list *element)
{
	if (element)
		printf("element data: %s\n", element->data);
	else
		printf("Something went wrong..\n");
	if (element->next)
		printf("Next data: %s", element->next->data);
}

int	main()
{
	t_list *p;
	t_list *a;
	ft_list_push_front(&a, "Adios");
	ft_list_push_front(&p, "Hello");
	return (0);
}