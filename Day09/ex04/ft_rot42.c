char	*ft_rot42(char *str)
{
	char	tmp;
	int		itr;

	itr = 0;
	while (str[itr] != '\0')
	{
		tmp = str[itr];
		if(tmp >= 'a' && tmp <= 'z')
			str[itr] = (tmp - 'a' + 42) % 26 + 'a';
		if(tmp >= 'A' && tmp <= 'Z')
			str[itr] = (tmp - 'A' + 42) % 26 + 'A';
		itr++;
	}
	return (str);
}