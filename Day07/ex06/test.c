#include <stdio.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int		main(int argc, char** argv)
{
	if (argc < 4)
	{
		printf("Incorrect input.\n");
		return (0);
	}
	printf("Result: %s", ft_convert_base(argv[1], argv[2], argv[3]));

	return (1);
}