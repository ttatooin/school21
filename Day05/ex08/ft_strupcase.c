char *ft_strupcase(char *str)
{
	unsigned int itr;

	if (str == 0)
		return str;
	itr = 0;
	while (str[itr] != '\0')
	{
		if (str[itr] >= 'a' && str[itr] <= 'z')
			str[itr] = 'A' + str[itr] - 'a';
		itr++;
	}
	return str;
}
