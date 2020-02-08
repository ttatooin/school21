int		ft_putchar(char c);

char base16[] = "0123456789abcdef";

void	print_address(unsigned int adr)
{
	unsigned int order;

	order = 268435456;
	while (order > 0)
	{
		ft_putchar(base16[adr / order]);
		adr %= 16;
		order /= 16;
	}
	ft_putchar(':');
	ft_putchar(' ');
}

void	print_hex_chars(char *str, unsigned int pos, unsigned int size)
{
	unsigned int itr;

	itr = 0;
	while (itr < 16)
	{
		if (itr < size)
		{
			ft_putchar(base16[str[pos + itr] / 16]);
			ft_putchar(base16[str[pos + itr] % 16]);
		}
		else
		{
			ft_putchar(' ');
			ft_putchar(' ');
		}
		if (itr % 2 == 1)
			ft_putchar(' ');
		itr++;
	}
}

void	print_char(char c)
{
	if (c >= 32)
		ft_putchar(c);
	else
		ft_putchar('.');
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	char *str;
	unsigned int itr;
	unsigned int mid;

	if (addr == 0 || size == 0)
		return (addr);
	str = (char*) addr;
	itr = 0;
	while (itr < size)
	{
		print_address(itr);
		print_hex_chars(str, itr, size - itr);
		ft_putchar(' ');
		mid = 0;
		while (mid < 16 && itr + mid < size)
		{
			print_char(str[itr + mid]);
			mid++;
		}
		ft_putchar('\n');
		itr += 16;
	}
	return (addr);
}
