#include"libft.h"

/*
Allocates (with malloc(3)) and returns a “fresh” substring
from the string given as argument. The substring begins at
indexstart and is of size len. If start and len aren’t refering to a valid substring, the behavior is undefined. If the
allocation fails, the function returns NULL
*/

char *ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t i;
	char *str;
	if(!s || start < 0)
		return NULL;
	if(!(str = (char *)malloc((len + 1) * sizeof(char))))
		return NULL;
		
	i = 0;
	while(i < start)
	{
		i++;
	}
	
	while(s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	
	return str;
}