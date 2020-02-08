#include <stdio.h>

int ft_iterative_factorial(int nb);

int main()
{
	int i;

	i = -2;
	while (i <= 14)
	{
		printf("%d: %d\n", i, ft_iterative_factorial(i));
		i++;
	}
	return (0);
}