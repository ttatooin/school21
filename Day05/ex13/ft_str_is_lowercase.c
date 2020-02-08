int	ft_str_is_lowercase(char *str)
{
	unsigned int itr;

	if (str == 0)
		return (1);
	itr = 0;
	while (str[itr] != '\0')
		if (str[itr] >= 'a' && str[itr] <= 'z')
			itr++;
		else
			return (0);
	return (1);
}
