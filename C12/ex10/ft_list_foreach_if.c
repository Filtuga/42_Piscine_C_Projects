#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void *data_ref, int (*comp)())
{
	t_list	*list_ptr = begin_list;

	while (list_ptr)
	{
		if (!comp(list_ptr->data, data_ref))
			(*f)(list_ptr->data);

		list_ptr = list_ptr->next;
	}
}