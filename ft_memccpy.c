#include "libft.h"
//Copies n bytes from src to dst. Stops when the copied element is c
void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t i;
	unsigned char cc;
	unsigned char* a;
	const unsigned char* b;
	
	i = 0;
	a = (unsigned char*)dst;
	b = (const unsigned char*)src;
	cc = (unsigned char)c;
	while(i < n)
	{
		a[i] = b[i];
		if(b[i] == cc)
			return (dst + i + 1);
		i++;
	}
	
	return 0;
}