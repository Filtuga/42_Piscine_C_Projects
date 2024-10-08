#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (src[i] != 0 && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i++] = 0;
	return dest;
}

int		main()
{
	char src[] = "This is a string";
	char dest[40];
	//char *d = ft_strncpy(dest, src, 5);
	char *p = strncpy(dest, src, 5);
	printf("%s\n", p);
}