#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;
	return dest;
}

int	main()
{
	char str1[] = "Hello";
	char str2[11] = "Hello";
	char str3[11] = "Hello";
	char *dest1;
	char *dest2;
	dest1 = ft_strcat(str2, str1);
	dest2 = strcat(str3, str1);
	printf("Dest: %s\n", dest1);
	printf("Original func. Dest: %s\n", dest2);
	return (0);
}
