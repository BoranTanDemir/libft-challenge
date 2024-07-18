#include "libft.h"

void *ft_calloc(size_t nitems, size_t n)
{
	if(nitems == 0 || n == 0)
		return NULL;
	
	void *ptr;
	size_t area;
	
	area = (nitems * n);
	ptr = malloc(area);
	
	if(ptr == NULL)
		return NULL;
	
	ft_bzero(ptr, area);
	
	return ptr;
}