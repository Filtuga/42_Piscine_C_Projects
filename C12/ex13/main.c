#include "ft_list.h"

void	ft_change_data(void *data)
{
	strcpy((char *)data, "Changed Data.");
}

void	ft_display_all_elem(t_list *element)
{
	t_list	*ptr = element;
	while (ptr != NULL)
	{
		printf("%s\n", (char *)ptr->data);
		ptr = ptr->next;
	}
}

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
	char	*data;

	i = 0;
	while (i < size)
	{
		data = malloc(sizeof(char) * strlen(strs[i]) + 1);
		strcpy(data, strs[i]);
		new_elem = ft_create_elem(data);
		if (!new_elem)
			return (0);
		new_elem->next = front_elem;
		front_elem = new_elem;
		i++;
	}
	return (front_elem);
}

int		main(int argc, char **argv)
{
	t_list	*p = NULL;
	t_list	*new_list = NULL;
	t_list	*new_list_2 = NULL;
	char	str[] = "New list.";
	char	str2[] = "New element.";


	p = ft_list_push_strs(argc - 1, argv + 1);
	if (p)
		ft_display_all_elem(p);
	else
		printf("no elements.\n");
	
	new_list = ft_create_elem(str);
	new_list_2 = ft_create_elem(str2);
	new_list->next = new_list_2;

	ft_list_merge(&p, new_list);
	printf("\nAfter merging.\n\n");

	if (p)
		ft_display_all_elem(p);
	else
		printf("no elements.\n");	
	return (0);
}