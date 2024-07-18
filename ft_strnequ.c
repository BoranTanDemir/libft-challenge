#include "libft.h"
/*
Lexicographical comparison between s1 and s2 up to n characters or until a ’\0’ is reached. If the 2 strings are identical,
the function returns 1, or 0 otherwise
*/
int ft_strnequ(char const *s1, char const *s2, size_t n)
{
	while(*s1 && *s2 && n--> 0)
	{
		if(*s1 == '\0' || *s2 == '\0')
			return 1;
		if(*s1 != *s2)
			return 0;
		s1++;
		s2++;
	}
}