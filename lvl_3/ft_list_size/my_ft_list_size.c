#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_list_size(t_list *begin_list)
{
	if (begin_list == 0)
		return (0);
	else
		return (1 + ft_list_size(begin_list->next));
}
//LET'S TEST IF IT COUNTS ELEMENTS CORRECTLY
t_list	*create_elem(void *data)
{
	t_list *new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (new_node)
	{
		new_node->data = data;
		new_node->next = NULL;
	}
	return (new_node);
}

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *new_node;

	new_node = create_elem(data);
	if (new_node)
	{
		new_node->next = *begin_list;
		*begin_list = new_node;
	}
}

int	main(void)
{
	t_list *begin = NULL;
	int data1 = 42;
	int data2 = 43;
	int data3 = 44;

	// Test an empty list
	printf("Size of empty list: %d\n", ft_list_size(begin));

	// Add one element
	ft_list_push_front(&begin, &data1);
	printf("Size after adding one element: %d\n", ft_list_size(begin));

	// Add second element
	ft_list_push_front(&begin, &data2);
	printf("Size after adding two elements: %d\n", ft_list_size(begin));

	// Add third element
	ft_list_push_front(&begin, &data3);
	printf("Size after adding three elements: %d\n", ft_list_size(begin));

	// Don't forget to free the list at the end!
	// ...

	return (0);
}
