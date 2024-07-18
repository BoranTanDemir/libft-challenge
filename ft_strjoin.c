#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	if(!s1 || !s2)
		return NULL;
	
	char *str;
	size_t i;
	size_t j;
	if( !(str = (char *)malloc( (ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char)) ) )
		return NULL;
	
	i = 0;
	j = 0;
	while(s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	
	while(s2[j])
	{
		str[j] = s2[j];
		j++;
	}
	
	str[i + j] = '\0';
	
	return str;
}