#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max);

int main(int argc, char **argv)
{
	int itr;
	int *arr;

	if (argc < 3)
		return (0);
	arr = ft_range(atoi(argv[1]), atoi(argv[2]));
	itr = 0;
	printf("Result: ");
	while (itr < atoi(argv[2]) - atoi(argv[1]))
	{
		printf("%d, ", arr[itr]);
		itr++;
	}
	return (0);
}