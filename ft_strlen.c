#include "libft.h"

//Simply returns the length of the given string.
size_t ft_strlen(const char *str)
{
	size_t i;
	unsigned char *s;
	
	i = 0;
	s = (unsigned char*)str;
	while(s[i] != '\0')
	{
		i++;
	}
	return i;
}