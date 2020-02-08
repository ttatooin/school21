#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

int main(void)
{
	char src[] = "ttatooin";
	char dest[50];

	printf("%s\n", src);
	printf("%s\n", ft_strcpy(dest, src));
	return (0);
}
