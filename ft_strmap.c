#include "libft.h"

/*
Applies the function f to each character of the string given
as argument to create a “fresh” new string (with malloc(3))
resulting from the successive applications of f.
*/

char *ft_strmap(char const *s, char (*f)(char))
{
	int i;
	char *str;
	
	if(!s)
		return NULL;
	if(!(str = (char *)malloc(sizeof(char) * ft_strlen(s) - 1)))
		return NULL;
	
	i = 0;
	if(s && f)
	{
		while(s[i])
		{
			str[i] = f(s[i]);
		}
	}
	str[i] = '\0';
	return str;
}
