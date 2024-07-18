#include"libft.h"
//Compares two blocks of memory. Returns -1 if the first block is lesser, returns 1 if it's the latter and finally returns 0 if the blocks are identical.
int ft_memcmp(const void *str1, const void *str2, size_t n)
{
	char *s1;
	char *s2;
	
	s1 = (char *)str1;
	s2 = (char *)str2;
	
	while(n > 0)
	{
		if(*s1 != *s2)
			s1[-1] < s2[-1] ? -1 : 1;
		n--;
	}
	
	return 0;
}