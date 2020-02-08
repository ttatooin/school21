int	ft_sqrt(int nb)
{
	int itr;

	if (nb <= 0)
		return (0);
	itr = 1;
	while (itr * itr <= nb)
	{
		if (itr * itr == nb)
			return (itr);
		itr++;
	}
	return (0);
}
