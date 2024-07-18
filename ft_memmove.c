#include "libft.h"
//Similar to memcpy. Prevents overlapping of memory blocks.
void *ft_memmove(void *dst, void *src, size_t n)
{
	unsigned char *from;
	unsigned char *to;
	size_t i;
	
	from = src;
	to = dst;
	i = 0;
	
	if(from == to || n == 0)
		return dst;
	
	if(from > to && (from - to) < n)
	{
		i = 0;
		while(i < n)
		{
			to[i] = from[i];
			i++;
		}
		return dst;
	}
	
	if(to > from && (to - from) < n)
	{
		i = n - 1;
		while(i > 0)
		{
			to[i] = from[i];
			i--;
		}
		return dst;
	}
	
	ft_memcpy(dst, src, n);
	return dst;
}