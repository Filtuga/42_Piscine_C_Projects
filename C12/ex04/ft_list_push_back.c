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
void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*new_elem = ft_create_elem(data);
	t_list	*p = *begin_list;

	if (!*begin_list)
		*begin_list = new_elem;
	else
	{
		while (p->next)
			p = p->next;
		p->next = new_elem;
	}
}