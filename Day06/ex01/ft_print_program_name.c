int	ft_putchar(char c);

int	main(int argc, char **argv)
{
	unsigned int itr;

	if (argc == 0)
		return (0);
	itr = 0;
	while (argv[0][itr] != '\0')
	{
		ft_putchar(argv[0][itr]);
		itr++;
	}
	return (0);
}
