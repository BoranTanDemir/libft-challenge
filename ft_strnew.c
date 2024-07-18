#include "libft.h"
/*
Allocates (with malloc(3)) and returns a “fresh” string ending with ’\0’. Each character of the string is initialized at
’\0’. If the allocation fails the function returns NULL.
*/
char *ft_strnew(size_t size)
{
	char *tmp;
	tmp = (char *)ft_calloc(size, sizeof(char));
	if(!tmp)
		return NULL;
	return tmp;
}