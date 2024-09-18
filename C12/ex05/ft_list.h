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

t_list	*ft_create_elem(void *data);
t_list	*ft_list_push_strs(int size, char **strs);
#endif