int	ft_str_is_numeric(char *str)
{
	unsigned int itr;

	if (str == 0)
		return (1);
	itr = 0;
	while (str[itr] != '\0')
		if ((str[itr] >= '0' && str[itr] <= '9'))
			itr++;
		else
			return (0);
	return (1);
}
