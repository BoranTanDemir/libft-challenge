#include"libft.h"

void ft_putendl_fd(char const *str, int fd)
{
	unsigned char c;
	size_t i;
	
	i = 0;
	c = '\n';
	
	while(str[i])
	{
		ft_putchar_fd(str[i], fd);
		i++;
	}
	
	ft_putchar_fd(c, fd);
}