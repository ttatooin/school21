char	*ft_strcpy(char *dest, char *src)
{
	int itr;

	if (src == 0 || dest == 0)
		return (dest);
	itr = 0;
	while (src[itr] != '\0')
	{
		dest[itr] = src[itr];
		itr++;
	}
	dest[itr] = '\0';
	return (dest);
}
