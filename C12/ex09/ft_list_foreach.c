#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list	*list_ptr = NULL;

	while (begin_list)
	{
		list_ptr = begin_list;
		(*f)(list_ptr->data);
		begin_list = begin_list->next;
	}
}