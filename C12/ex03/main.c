#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*new_elem;

	new_elem = malloc(sizeof(t_list));
	if (!new_elem)
		return (0);
	new_elem->data = data;
	new_elem->next = NULL;
	return (new_elem);
}

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*new_element;

	new_element = ft_create_elem(data);
	if (*begin_list)
	{
		new_element->next = *begin_list;
	}
	*begin_list = new_element;
}

void	ft_display_all_elem(t_list *element)
{
	while (element != NULL)
	{
		printf("%s\n", element->data);
		element = element->next;
	}
}


int		main()
{
	t_list	*p = NULL;
	t_list	*last = NULL;

	ft_list_push_front(&p, "1 element");
	ft_list_push_front(&p, "2 element");
	ft_list_push_front(&p, "3 element");
	ft_list_push_front(&p, "4 element");
	ft_list_push_front(&p, "5 element");
	last = ft_list_last(p);
	if (!last)
		printf("List is empty.\n");
	else
		printf("last element is: %s\n", last->data);
	ft_display_all_elem(p);
	return (0);
}