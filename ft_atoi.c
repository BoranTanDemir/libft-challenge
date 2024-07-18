#include"libft.h"

int ft_atoi(const char *str)
{
	int i;
	int neg;
	int res;
	
	i = 0;
	neg = 1;
	res = 0;
	while(str[i])
	{
		if(str[i] == '-')
			neg *= -1;
		else if( (str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
			continue;
		else if(str[i] >= '0' && str[i] <= '9')
			res = (str[i] - '0') + (res * 10);
		i++;
	}
	
	return res * neg;
}