int		ft_strlen(char *str)
{
	int i;

	i = 1;
	while (str[i-1] != '\0')
		i++;
	return (i);
}
