#include"libft.h"

char *ft_strdup(void *src)
{
	//Duplicates the given string.
	size_t len = ft_strlen(src) + 1;
	void *dst = malloc(len);
	
	if(!dst)
		return NULL;
	
	return (unsigned char*)ft_memcpy(dst, src, len);
}
