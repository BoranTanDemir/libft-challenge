#include"libft.h"
//Adds the element new at the beginnning of the list.
void ft_lstadd(t_list **alst, t_list *new)
{
	new->next = *alst;
	*alst = new;
}