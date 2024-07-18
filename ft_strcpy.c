#include"libft.h"

//Copies the src string into dst
char *ft_strcpy(char *dst, const char *src)
{
	if(src == NULL)
		return NULL;
		
	size_t i;
	
	i = 0;
	
	while(src[i])
	{
		dst[i] = src[i];
		i++;
	}
	
	dst[i] = '\0';
	return dst;
}