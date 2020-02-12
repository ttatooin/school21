int	ft_button(int i, int j, int k)
{
	if ((i - j) * (i - k) <= 0)
		return (i);
	if ((j - i) * (j - k) <= 0)
		return (j);
	else
		return (k);
}