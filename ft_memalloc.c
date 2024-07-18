#include "libft.h"

/*Allocates (with malloc(3)) and returns a “fresh” memory
area. The memory allocated is initialized to 0.
If the allocation fails, the function returns NULL*/

void *ft_memalloc(size_t size)
{
	void *area;
	area = malloc(size);
	if(!area)
		return NULL;
		
	ft_bzero(area, size);
	return area;
}
