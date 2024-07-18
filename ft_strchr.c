#include"libft.h"

//Returns the pointer to the first iteration of the given character.
char *ft_strchr(const char *src, int c)
{
	if(!src||c == '\0')
		return NULL;
		
	while(*src)
	{
		if(*src == c)
			return (char *)src;
		src++;
	}
	return (0);
}
