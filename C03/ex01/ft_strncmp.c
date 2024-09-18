int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i = 0;
	unsigned int	result = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i] && i < n)
		i++;
	result = s1[i] - s2[i];
	return (result);
}