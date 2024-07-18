#include"libft.h"

char *ft_strncat(char *dest, const char *src, size_t n)
{
	//Concatonates n amount of src into dst
	size_t i;
	size_t j;
	
	i = 0;
	j = ft_strlen(dest) - 1;
	
	while(src[i] && i < n)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	
	dest[j] = '\0';
	return dest;
}
