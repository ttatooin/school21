int	ft_str_is_alpha(char *str)
{
	unsigned int itr;

	if (str == 0)
		return (1);
	itr = 0;
	while (str[itr] != '\0')
		if ((str[itr] >= 'a' && str[itr] <= 'z') || (str[itr] >= 'A' && str[itr] <= 'Z'))
			itr++;
		else
			return (0);
	return (1);
}
