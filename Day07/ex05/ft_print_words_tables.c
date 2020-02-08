int	ft_putchar(char c);

void	ft_print_words_tables(char **tab)
{
	int wrd;
	int pos;

	wrd = 0;
	while (tab[wrd] != 0)
	{
		pos = 0;
		while (tab[wrd][pos] != '\0')
		{
			ft_putchar(tab[wrd][pos]);
			pos++;
		}
		ft_putchar('\n');
		wrd++;
	}
}
