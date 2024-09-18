#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*new_elem;

	new_elem = malloc(sizeof(t_list));
	if (!new_elem)
		return (0);
	new_elem->data = data;
	new_elem->next = NULL;
	return (new_elem);
}

t_list	*ft_list_push_strs(int size, char **strs)
{
	if (size <= 0 || !strs[0])
		return (0);
	
	t_list	*front_elem = NULL;
	t_list	*new_elem;
	int		i;

	i = 0;
	while (i < size)
	{
		new_elem = ft_create_elem(strs[i]);
		if (!new_elem)
			return (0);
		new_elem->next = front_elem;
		front_elem = new_elem;
		i++;
	}
	return (front_elem);
}