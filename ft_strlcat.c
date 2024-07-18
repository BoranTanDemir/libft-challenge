#include"libft.h"

//Concatenates src into dst and returns the length of the producted string.
size_t ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t i;
	size_t j;
	size_t k;
	
	i = 0;
	j = ft_strlen(dst) - 1;
	k = 0;
	
	while(src[i] && i < n)
	{
		dst[j] = src[i];
		i++;
		j++;
		k++;
	}
	dst[j] = '\0';
	return k + ft_strlen(dst);
}