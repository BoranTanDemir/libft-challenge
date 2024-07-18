#include "libft.h"
/*
Allocates (with malloc(3)) and returns an array of “fresh”
strings (all ending with ’\0’, including the array itself) obtained by spliting s using the character c as a delimiter.
If the allocation fails the function returns NULL. Example
: ft_strsplit("*hello*fellow***students*", ’*’) returns the array ["hello", "fellow", "students"].
*/
/*
Three functions: ft_strcount, ft_strl, ft_split all have the same arguments.
*/

static size_t ft_strcount(char const *s, char c)
{
	size_t i;
	size_t count;
	
	i = 0;
	count = 0;
	while(s[i])
	{
		while(s[i] == c)
			i++;
			
		if(s[i] != c && s[i])
			count++;
	
		while(s[i] != c && s[i])
			i++;
	}
	return (count);
}

static size_t ft_strl(char const *s, char c)
{
	size_t i;
	size_t len;
	
	i = 0;
	len = 0;
	
	while(s[i] && s[i] != c)
	{
		len++;
		i++;
	}
	
	return len;
}

static char **ft_split(char const *s, char c)
{
	char **mem;
	size_t i;
	size_t j;
	size_t k;
	
	i =-1;
	j = 0;
	if(!s || !c || !(mem = (char **)malloc(sizeof(char) * ft_strcount(s, c) + 1)))
		return NULL;
	while(ft_strcount(s, c) > ++i)
	{
		k = 0;
		if(! (mem[i] = (char *)malloc(sizeof(char) * ft_strl(&s[j], c) + 1)))
			return NULL;
		while(s[j] == c)
			j++;
		while(s[j] != c && s[j])
			mem[i][k++] = s[j++];
		mem[i][k] = '\0';
	}
	mem[i] = 0;
	return (mem);
}

char **ft_strsplit(char const *s, char c)
{
	if(!s || !c)
		return NULL;
	
	return ft_split(s, c);
}



