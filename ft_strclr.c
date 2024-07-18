#include "libft.h"
/*
Sets every character of the string to the value ’\0’.
*/
void ft_strclr(char *s)
{
	size_t n = ft_strlen(s) - 1;
	if(n > 0)
		ft_bzero(s, n);
}
