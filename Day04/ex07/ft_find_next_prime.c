int	is_prime(int nb)
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


int	ft_find_next_prime(int nb)
{
	int res;

	if (nb % 2 == 0)
		res = nb + 1;
	else
		res = nb;
	while (is_prime(res) != 1)
		res += 2;
	return (res);
}
