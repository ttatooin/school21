#include <stdio.h>

char *ft_strupcase(char *str);

int main(void)
{
	char str1[] = "Abc-t3dFe";
	printf("Original string: %s\n", str1);
	printf("Result string: %s\n", ft_strupcase(str1));

	return (0);
}
