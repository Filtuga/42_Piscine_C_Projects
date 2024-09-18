#include "ft_list.h"

void	ft_free_data(void *data)
{
	free(data);
}

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
    t_list *current;
    t_list *next;

    current = begin_list;
    while (current)
    {
        next = current->next;        // Save the next node
		if (free_fct)
       		free_fct(current->data);     // Free the data using the provided function
        free(current);               // Free the node itself
        current = next;              // Move to the next node
    }
}