#include "libft.h"
/*
Takes as a parameter the adress of a pointer to a link and
frees the memory of this link and every successors of that link
using the functions del and free(3). Finally the pointer to
the link that was just freed must be set to NULL (quite similar
to the function ft_memdel from the mandatory part)
*/
void ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *list;
	t_list *temp;
	
	list = *alst;
	while(list != NULL)
	{
		temp = list->next;
		del(list, list->content_size);
		free(list);
		list = temp;
	}
	*alst = NULL;
}
