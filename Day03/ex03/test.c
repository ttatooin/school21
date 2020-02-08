#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
	int div;
	int mod;

	ft_div_mod(7, 3, &div, &mod);
	printf("div = %d, mod = %d", div, mod);
	return (0);
}
