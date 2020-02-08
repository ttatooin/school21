char *ft_strlowcase(char *str)
{
	unsigned int itr;

	if (str == 0)
		return str;
	itr = 0;
	while (str[itr] != '\0')
	{
		if (str[itr] >= 'A' && str[itr] <= 'Z')
			str[itr] = 'a' + str[itr] - 'A';
		itr++;
	}
	return str;
}
