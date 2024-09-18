#include "ft_list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), void (*free_fct)(void *))
{
	t_list	*temp_list_ptr = NULL;
	t_list	*list_ptr = *begin_list;
	t_list	*next_list_ptr = NULL;;

	if (list_ptr->next)
		next_list_ptr = list_ptr->next;


	if (list_ptr && !cmp(list_ptr->data, data_ref))
	{
		temp_list_ptr = list_ptr;
		if (next_list_ptr)
		{
			*begin_list = next_list_ptr;
			if (next_list_ptr->next)
				next_list_ptr = next_list_ptr->next;
		}
		printf("here\n");
		printf("temp ptr: %s", (char *)(*begin_list)->data);
		free_fct(temp_list_ptr->data);
		free_fct(temp_list_ptr);
		list_ptr = *begin_list;
	}
	if (list_ptr)
	{
		printf("1st prt: %s\n", (char*)list_ptr->data);
		printf("Next prt: %s\n", (char*)next_list_ptr->data);
	}
}