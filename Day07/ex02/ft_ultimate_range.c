#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	itr;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = (int*)malloc(sizeof(int) * (max - min));
	itr = 0;
	while (itr < max - min)
	{
		(*range)[itr] = min + itr;
		itr++;
	}
	return (itr);
}
