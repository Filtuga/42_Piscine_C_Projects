#include "ft_list.h"

void	ft_list_remove(t_list **begin_list, void *data_ref, int (*comp)(), void (*free_fct)(void *))
{
	t_list	*list_ptr;
	t_list	*prev_ptr;
	t_list	*temp;

	if (!begin_list || !*begin_list)
		return;

	list_ptr = *begin_list;
	prev_ptr = NULL;

	while (list_ptr)
	{
		if (!comp(list_ptr->data, data_ref))
		{
			temp = list_ptr;
			if (!prev_ptr)
				*begin_list = list_ptr->next;
			else
				prev_ptr->next = list_ptr->next;
			list_ptr = list_ptr->next;
			free_fct(temp->data);
			free_fct(temp);
		}
		else
		{
			prev_ptr = list_ptr;
			list_ptr = list_ptr->next;
		}
	}
}

