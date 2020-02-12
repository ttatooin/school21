#include <stdio.h>

char	*ft_rot42(char *str);

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Incorrect input.\n");
		return (0);
	}
	printf("%s", ft_rot42(argv[1]));
	return (0);
}