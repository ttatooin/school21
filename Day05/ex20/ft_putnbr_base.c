int		ft_putchar(char c);

int		check_radix(char *base)
{
	unsigned int itr;
	unsigned int tmp;

	if (base == 0 || base[0] == '\0' || base[1] == '\0')
		return 0;
	itr = 0;
	while (base[itr] != '\0')
	{
		if (base[itr] < 'a' || base[itr] > 'z')
			if (base[itr] < 'A' || base[itr] > 'Z')
				if (base[itr] < '0' || base[itr] > '9')
					return (0);
		tmp = 0;
		while (tmp < itr)
		{
			if (base[tmp] == base[itr])
				return (0);
			tmp++;
		}
		itr++;
	}
	return (itr);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int order;
	int radix;

	if ((radix = check_radix(base)) <= 1)
		return;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	order = 1;
	while (nbr / order >= radix)
		order *= radix;
	while (order > 0)
	{
		ft_putchar(base[nbr/order]);
		nbr %= order;
		order /= radix;
	}
}
