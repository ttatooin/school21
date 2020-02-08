int	ft_iterative_power(int nb, int power)
{
	int itr;
	int res;

	if (power < 0)
		return (0);
	if (power == 1)
		return (1);
	itr = 2;
	res = nb;
	while (itr <= power)
	{
		res *= nb;
		itr++;
	}
	return (res);
}
