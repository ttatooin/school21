int	ft_strcmp(char *s1, char *s2)
{
	unsigned int itr;

	itr = 0;
	while (1)
	{
		if (s1[itr] > s2[itr])
			return (1);
		if (s1[itr] < s2[itr])
			return (-1);
		if (s1[itr] == '\0' || s2[itr] == '\0')
			return (0);
		itr++;
	}
}
