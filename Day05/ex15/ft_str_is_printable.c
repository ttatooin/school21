int	ft_str_is_printable(char *str)
{
	unsigned int itr;

	if (str == 0)
		return (1);
	itr = 0;
	while (str[itr] != '\0')
		if (str[itr] > 31)
			itr++;
		else
			return (0);
	return (1);
}
