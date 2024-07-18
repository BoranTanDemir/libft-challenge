#include"libft.h"

void ft_putstr(char const *str)
{
	size_t i;
	
	i = 0;
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}