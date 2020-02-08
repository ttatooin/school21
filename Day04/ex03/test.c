#include <stdio.h>

int ft_recursive_power(int nb, int power);

int main()
{
	int nb;
	int power;

	nb = 2;
	power = 5;
	printf("%d^%d = %d\n", nb, power, ft_recursive_power(nb, power));

	nb = -5;
	power = 3;
	printf("%d^%d = %d\n", nb, power, ft_recursive_power(nb, power));

	return (0);
}