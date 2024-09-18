#ifndef FT_LIST_H
#define FT_LIST_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct t_list
{
	void	*data;
	struct	t_list *next;
};
typedef struct t_list t_list;

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2);
#endif