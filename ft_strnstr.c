#include"libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	if(needle == NULL && haystack)
		return (unsigned char*)haystack;
		
	unsigned char *s;
	
	s = (unsigned char*)haystack;
	
	while(*s)
	{
		if(*s == *needle)
		{
			if(!ft_strncmp(s, needle, n))
				return (char *)s;
		}
		s++;
	}
	
	return NULL;
}