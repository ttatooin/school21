int	ft_iterative_factorial(int nb)
{
	int itr;
	int res;

	if (nb < 0 || nb > 12)
		return (0);
	itr = 1;
	res = 1;
	while (itr <= nb)
	{
		res *= itr;
		itr++;
	}
	return (res);
}
