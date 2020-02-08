int	ft_is_prime(int nb)
{
	int itr;

	if (nb <= 1)
		return (0);
	itr = 2;
	while (itr <= nb / 2)
	{
		if (nb % itr == 0)
			return (0);
		itr++;
	}
	return (1);
}
