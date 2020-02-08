unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int itr;

	itr = 0;
	while (itr < size - 1 && src[itr] != '\0')
	{
		dest[itr] = src[itr];
		itr++;
	}
	dest[itr] = '\0';
	return (itr);
}
