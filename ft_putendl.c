#include"libft.h"

void ft_putendl(char const *str)
{
	size_t i;
	unsigned char s = '\n';
	i = 0;
	ft_putstr(str);
	write(1, &s, 1);
}