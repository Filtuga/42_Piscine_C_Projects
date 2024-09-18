#ifndef FT_LIST_H
#define FT_LIST_H

#include <stdlib.h>
#include <stdio.h>

struct t_list
{
	char *data;
	struct	t_list *next;
};
typedef struct t_list t_list;

t_list	*ft_list_last(t_list *begin_list);

#endif