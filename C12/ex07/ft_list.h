#ifndef FT_LIST_H
#define FT_LIST_H

#include <stdlib.h>
#include <stdio.h>

struct t_list
{
	void	*data;
	struct	t_list *next;
};
typedef struct t_list t_list;


t_list *ft_list_at(t_list *begin_list, unsigned int nbr);
#endif