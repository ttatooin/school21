#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
	char src[] = "ttatooin";
	char dest[50];

	printf("%s\n", src);
	printf("%s\n", ft_strncpy(dest, src, 4));
	printf("%s\n", ft_strncpy(dest, src, 5));
	printf("%s\n", ft_strncpy(dest, src, 9));
	printf("%s\n", ft_strncpy(dest, src, 12));
	return (0);
}
