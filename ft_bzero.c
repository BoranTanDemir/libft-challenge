#include "libft.h"

//Function to replace n amount of bytes to value zero.
void ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}