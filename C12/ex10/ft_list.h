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

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void *data_ref, int (*comp)());
#endif