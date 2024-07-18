#include "libft.h"

//This function changes the first n elements of a given dynamic array to the element c
void *ft_memset(void *str, int c, size_t n)
{
	size_t i;
	unsigned char* s;
	
	i = 0;
	s = (unsigned char*)str;
	
	while(i < n)
	{
		s[i] = c;
		i++;
	}
	
	return s;
}