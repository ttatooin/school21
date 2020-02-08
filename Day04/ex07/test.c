#include <stdio.h>

int ft_find_next_prime(int index);

int main(void)
{
	int i;

	i = -2;
	while (i <= 20)
	{
		printf("%d: %d\n", i, ft_find_next_prime(i));
		i++;
	}
	return(0);
}