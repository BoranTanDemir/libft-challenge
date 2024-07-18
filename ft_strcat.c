#include"libft.h"

char *ft_strcat(char *dst, const char *src)
{
	//Concatonates src into dst
	size_t i;
	size_t j;
	
	i = 0;
	j = ft_strlen(dst) - 1;
	while(src[i])
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return dst;
}
