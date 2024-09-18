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

void	ft_list_push_front(t_list **begin_list, void *data);


#endif