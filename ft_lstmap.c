#include "libft.h"
/*
Iterates a list lst and applies the function f to each link to
create a “fresh” list (using malloc(3)) resulting from the successive applications of f. If the allocation fails, the function
returns NULL.
*/
t_list *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new_list;
	t_list *head;
	t_list *node;
	
	if(!lst || !f)
		return NULL;
	
	node = f(lst);
	if(!(new_list = ft_lstnew(node->content, node->content_size)))
		return NULL;
	
	lst = lst->next;
	
	head = new_list;
	while(lst)
	{
		node = NULL;
		node = f(lst);
		if(!(new_list = ft_lstnew(node->content, node->content_size)))
			return NULL;
		
		new_list = new_list->next;
		lst = lst->next;
	}
	return (head);
}
