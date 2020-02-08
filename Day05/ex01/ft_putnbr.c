int		ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int order;

	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	order = 1;
	while (nb / order > 10)
		order *= 10;
	while (order > 0)
	{
		ft_putchar('0' + nb / order);
		nb %= order;
		order /= 10;
	}
}
