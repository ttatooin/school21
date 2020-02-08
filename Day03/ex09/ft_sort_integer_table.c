void	ft_sort_integer_table(int *tab, int size)
{
	int cycle;
	int pos;
	int tmp;

	cycle = 0;
	while (cycle < size)
	{
		pos = 0;
		while (pos < size - 1)
		{
			if (tab[pos] > tab[pos + 1])
			{
				tmp = tab[pos];
				tab[pos] = tab[pos + 1];
				tab[pos + 1] = tmp;
			}
			pos++;
		}
		cycle++;
	}
}
