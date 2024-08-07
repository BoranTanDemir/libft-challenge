#include "libft.h"
/*
Applies the function f to each character of the string passed
as argument, and passing its index as first argument. Each
character is passed by address to f to be modified if necessary.
*/
void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	if(s && f)
	{
		unsigned int index = 0;
		while(*s)
		{
			f(index++, s++);
		}
	}
}