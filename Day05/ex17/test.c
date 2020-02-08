#include <stdio.h>

char *ft_strncat(char *dest, char *src, int nb);

int main(void)
{
	char dest[100] = "First";
	char src[] = "Second";

	printf("%s + %s is:\n", dest, src);
	printf("%s\n", ft_strncat(dest, src, 3));

	return (0);
}
