#include "libft.h"

char *ft_strtrim(char const *s)
{
	if(!s)
		return NULL;

	size_t index;
	size_t trim_count;
	size_t i;
	
	trim_count = 0;
	index = 0;
	i = 0;
	while(s[index])
	{
		if(s[index] == ' ' || s[index] == '\n' || s[index] == '\t' || s[index] == ',')
			trim_count++;
		index++;
	}
	char *str;
	if( !(str = (char *) malloc( (ft_strlen(s) - trim_count + 1) * sizeof(char) ) ) )
		return NULL;
	
	index = 0;
	while(s[index])
	{
		if(s[index] != ' ' && s[index] != '\n' && s[index] != '\t' && s[index] != ',')
		{
			str[i] = s[index];
			i++;
		}
		index++;
	}
	str[i] = '\0';
	
	return str;
}