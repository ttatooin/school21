int	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int itr;
	unsigned int pos;

	itr = 1;
	while (itr < argc)
	{
		pos = 0;
		while (argv[itr][pos] != '\0')
		{
			ft_putchar(argv[itr][pos]);
			pos++;
		}
		ft_putchar('\n');
		itr++;
	}
	return (0);
}
