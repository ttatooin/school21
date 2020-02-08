#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);

int main(int argc, char **argv)
{
	int itr;
	int len;
	int *arr;

	if (argc < 3)
		return (0);
	arr = 0;
	len = ft_ultimate_range(&arr, atoi(argv[1]), atoi(argv[2]));
	itr = 0;
	printf("Length: %d\nResult: ", len);
	while (itr < len)
	{
		printf("%d, ", arr[itr]);
		itr++;
	}
	return (0);
}