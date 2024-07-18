#include"libft.h"

//Compares two strings within a given size. Returns 0 if either one of the strings end as all the characters are the same. Else, returns the difference between the final characters of the strings.
int ft_strncmp(const char *str1, const char *str2, size_t n)
{
	char *a;
	char *b;
	size_t i;
	
	a = (unsigned char*)str1;
	b = (unsigned char*)str2;
	i = 0;
	
	while(i < n && a[i] == b[i])
	{
		if(a[i] == '\0' || b[i] == '\0')
			return 0;
		i++;
	}
	
	return (unsigned char)a[i] - (unsigned char)b[i];
}