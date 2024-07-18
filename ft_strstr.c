#include"libft.h"

//Returns the pointer to the first iteration of a given substring from the original string.
char *ft_strstr(const char *haystack, const char *needle)
{
	if(needle == NULL && haystack)
		return haystack;
		
	char *s;
	size_t n;
	
	n = ft_strlen(needle) - 1;
	s = (unsigned char *)haystack;
	
	while(*s)
	{
		if(!ft_strncmp(s, needle, n))
			return s;
		s++;
	}
	return NULL;
}
