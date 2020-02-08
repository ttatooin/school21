#include <stdio.h>

void ft_putnbr(int nb);
int ft_putchar(char c);

int main(void)
{
	ft_putnbr(5);
	puts("");

	ft_putnbr(65);
	puts("");

	ft_putnbr(765);
	puts("");

	ft_putnbr(-765);
	ft_putchar('\n');

	return (0);
}
