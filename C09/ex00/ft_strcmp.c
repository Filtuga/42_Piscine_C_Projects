int	ft_strcmp(char *s1, char *s2)
{
	int	i = 0;
	int	result = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	result = s1[i] - s2[i];
	return (result);
}