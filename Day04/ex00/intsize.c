#include <stdio.h>

int main(void)
{
	int i = 1;
	int num = 1;
	while (i < 20)
	{
		num *= i;
		printf("%d: %d\n", i, num);
		i++;
	}
	return (0);
}