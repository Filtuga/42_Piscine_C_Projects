#include "ft_list.h"

t_list *ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;

	i = 0;
	while (i < nbr && begin_list)
	{
		begin_list = begin_list->next;	
		i++;
	}
	if (!begin_list)
		return (0);
	return (begin_list);
}