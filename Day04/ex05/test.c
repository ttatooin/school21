#include <stdio.h>

int ft_sqrt(int index);

int main(void)
{
	int i;

	i = -2;
	while (i < 17)
	{
		printf("%d: %d\n", i, ft_sqrt(i));
		i++;
	}
	return(0);
}