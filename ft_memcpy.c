#include "libft.h"
//Copies n characters from src to dst
void *ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;
	unsigned char* s;
	const unsigned char* d;
	
	i = 0;
	s = dst;
	d = src;
	
	while(i < n)
	{
		s[i] = d[i];
		i++;
	}
	
	return s;
}