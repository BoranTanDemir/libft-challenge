#include"libft.h"

static size_t num_len(int n)
{
	size_t len;
	
	len = 0;
	
	if(n < 0)
		len++;
	
	while(n != 0)
	{
		len++;
		n /= 10;
	}
	
	return len;
}

void ft_putnbr(int n)
{
	size_t len;
	
	len = num_len(n);
	write(1, ft_itoa(n), len);
}