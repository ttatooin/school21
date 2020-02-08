#include <stdio.h>

int ft_iterative_power(int nb, int power);

int main()
{
	int nb;
	int power;

	nb = 2;
	power = 5;
	printf("%d^%d = %d\n", nb, power, ft_iterative_power(nb, power));

	nb = -5;
	power = 3;
	printf("%d^%d = %d\n", nb, power, ft_iterative_power(nb, power));

	return (0);
}