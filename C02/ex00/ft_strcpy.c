#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*result;

	result = dest;
	while (*src != 0)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = 0;
	return result;
}