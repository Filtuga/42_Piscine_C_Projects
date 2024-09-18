#include "ft_list.h"

void	ft_display_all_elem(t_list *element)
{
	while (element != NULL)
	{
		printf("%s\n", element->data);
		element = element->next;
	}
}


int		main(int argc, char **argv)
{
	t_list	*p = NULL;

	p = ft_list_push_strs(argc, argv);
	if (p)
		ft_display_all_elem(p);
	else
		printf("no elements.\n");
	return (0);
}