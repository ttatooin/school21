int		check_symbol(char sym)
{
	if (sym >= 'a' && sym <= 'z')
		return (1);
	else if (sym >= 'A' && sym <= 'Z')
		return (1);
	else if (sym >= '0' && sym <= '9')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	unsigned int itr;

	if (str == 0)
			return str;
	itr = 0;
	while (str[itr] != '\0')
	{
		if (check_symbol(str[itr]) == 1)
		{
			if (str[itr] >= 'a' && str[itr] <= 'z')
				str[itr] = 'A' + str[itr] - 'a';
			while (check_symbol(str[itr]) == 1)
				itr++;
		}
		else
			itr++;
	}
	return (str);
}
