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

