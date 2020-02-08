#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	itr;
	int	*arr;

	if (min >= max)
		return (0);
	arr = (int*)malloc(sizeof(int) * (max - min));
	itr = 0;
	while (itr < max - min)
	{
		arr[itr] = min + itr;
		itr++;
	}
	return (arr);
}
