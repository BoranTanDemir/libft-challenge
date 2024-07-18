#include"libft.h"

//Copies n amount of bytes from src into dst.
char *ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t i;
	
	i = 0;
	
	while(src[i] && i < n)
	{
		dst[i] = src[i];
		i++;
	}	
	dst[i] = '\0';
	return dst;
}