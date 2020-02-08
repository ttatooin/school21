char	*ft_strrev(char *str)
{
	int pos;
	int len;
	char tmp;

	len = 0;
	while (str[len] != '\0')
		len++;
	if (len == 0)
		return (str);
	pos = 0;
	while (pos < len/2)
	{
		tmp = str[pos];
		str[pos] = str[len - 1 - pos];
		str[len - 1 - pos] = tmp;
		pos++;
	}
	return (str);
}
