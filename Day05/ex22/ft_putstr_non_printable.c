int		ft_putchar(char c);

void	ft_putstr_non_printable(char *str)
{
	unsigned int itr;
	char base16[] = "0123456789ABCDEF";

	itr = 0;
	while (str[itr] != '\0')
	{
		if (str[itr] >= 32)
			ft_putchar(str[itr]);
		else
		{
			ft_putchar('\\');
			ft_putchar(base16[str[itr] / 16]);
			ft_putchar(base16[str[itr] % 16]);
		}
		itr++;
	}
}
