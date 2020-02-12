#include <stdio.h>
#include <stdlib.h>

int	ft_button(int i, int j, int k);

int main(int argc, char **argv)
{
	int i;
	int j;
	int k;

	if (argc != 4)
	{
		printf("Incorrect input.\n");
		return (0);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	k = atoi(argv[3]);

	printf("Middle is: %d\n", ft_button(i, j, k));
	return (0);
}