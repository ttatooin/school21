unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int itr;
	unsigned int end;

	end = 0;
	while (dest[end] != '\0')
		end++;
	itr = 0;
	while (itr < size - 1 && src[itr] != '\0')
	{
		dest[end + itr] = src[itr];
		itr++;
	}
	dest[end + itr] = '\0';
	return (end + itr);
}
