#include <stdio.h>

char *ft_strcapitalize(char *str);

int main(void)
{
	char str[] = "salut, comment tu vas ? 42 mots quarante-deux; cinquange+et+un";

	printf("%s\n", str);
	printf("%s\n", ft_strcapitalize(str));
	
	return (0);
}
