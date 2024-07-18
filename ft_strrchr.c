#include"libft.h"

//Returns the first pointer of the given character starting from the end of the string iterating towards the start of the string.
char *ft_strrchr(const char *src, int c)
{
	size_t i;
	
	i = ft_strlen(src) - 1;
	while(i > 0)
	{
		i--;
		src++;
	}
	
	while(*src)
	{
		if(*src == c)
			return src;
		src--;
	}
	
	return NULL;
}
