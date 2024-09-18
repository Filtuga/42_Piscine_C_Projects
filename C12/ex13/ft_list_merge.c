#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	if (!*begin_list1 || !begin_list2)
		return;
	t_list	*list1_ptr = *begin_list1;
	t_list	*list2_ptr = begin_list2;
	int		size1 = 0;
	int		size2 = 0;
	int		i = 0;

	while (list1_ptr)
	{
		list1_ptr = list1_ptr->next;
		size1++;
	}
	while (list2_ptr)
	{
		list2_ptr = list2_ptr->next;
		size2++;
	}
	list1_ptr = *begin_list1;
	list2_ptr = begin_list2;
	if (size1 == size2)
	{
		list1_ptr->data = begin_list2->data;
		list1_ptr->next = begin_list2->next;
	}
	else if (size1 > size2)
	{
		while (list1_ptr->next != list2_ptr)
		{
			while(i < (size1 - size2) - 1)
			{
				list1_ptr = list1_ptr->next;
				i++;
			}
			list1_ptr->next = list2_ptr;
		}
	}
}