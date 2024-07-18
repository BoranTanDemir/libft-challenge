#include"libft.h"

t_list *ft_lstnew(void const *content, size_t content_size)
{	
	t_list *new_link;
	if( !(new_link = (t_list *)malloc(sizeof(t_list)) ) )
		return NULL;
	
	if(!content)
		new_link->content = NULL;
		new_link->content_size = 0;
	
	new_link->content = content;
	new_link->content_size = content_size;
	new_link->next = NULL;
	
	return new_link;
}