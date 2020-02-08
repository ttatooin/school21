#include <stdio.h>

void	ft_putstr_non_printable(char *str);

int main(void)
{
	char str[] = "Coucou\ntu vas bien ?";

	printf("Original string: %s\n", str);
	printf("Converted string: ");
	ft_putstr_non_printable(str);

	return (0);
}