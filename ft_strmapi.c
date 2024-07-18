#include "libft.h"
/*
Applies the function f to each character of the string passed
as argument by giving its index as first argument to create a
“fresh” new string (with malloc(3)) resulting from the successive applications of f.
*/
char *ft_strmapi(char const *s, char(*f)(unsigned int, char))
{
	int i;
	char *str;
	
	if(!s)
		return NULL;
	if(! (str = (char *)malloc(sizeof(char) * ft_strlen(s) - 1)) )
		return NULL;
	
	if(s && f)
	{
		while(s[i])
		{
			str[i] = f(i, s[i]);
			i++;
		}
	}
	str[i] = '\0';
	return str;
}