char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		new_word;

	i = 0;
	new_word = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (new_word == 1)
				str[i] -= 32;
			    new_word = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			new_word = 0;
		else
			new_word = 1;
		i++;
	}
	return (str);
}