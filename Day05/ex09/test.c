#include <stdio.h>

char *ft_strlowcase(char *str);

int main(void)
{
	char str1[] = "Abc-t3dFe";
	printf("Original string: %s\n", str1);
	printf("Result string: %s\n", ft_strlowcase(str1));

	return (0);
}
