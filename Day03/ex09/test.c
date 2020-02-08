#include <stdio.h>

void ft_sort_integer_table(int *tab, int size);

int main(void)
{
	int i;
	int tab[] = {5, 3, 1, 6, 4, 2};

	ft_sort_integer_table(tab, 6);
	i = 0;
	while (i < 6)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}