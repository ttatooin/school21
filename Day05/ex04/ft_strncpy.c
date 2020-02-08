char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int itr;

	if (src == 0 || dest == 0)
		return (dest);
	itr = 0;
	while (src[itr] != '\0' && itr < n)
	{
		dest[itr] = src[itr];
		itr++;
	}
	while (itr < n)
	{
		dest[itr] = '\0';
		itr++;
	}
	return (dest);
}
