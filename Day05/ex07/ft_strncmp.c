int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int itr;

	itr = 0;
	while (1)
	{
		if (s1[itr] > s2[itr])
			return (1);
		if (s1[itr] < s2[itr])
			return (-1);
		if (s1[itr] == '\0' || s2[itr] == '\0' || itr == n - 1)
			return (0);
		itr++;
	}
}
