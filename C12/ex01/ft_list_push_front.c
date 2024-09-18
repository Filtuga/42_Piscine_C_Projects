#include "ft_list.h"

t_list	*ft_create_elem(void *data);

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