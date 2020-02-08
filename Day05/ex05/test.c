#include <stdio.h>

char *ft_strstr(char *str, char *to_find);

int main(void)
{
	char str1[] = "ABCsrcDEF";
	char str2[] = "ABCsrDEF";
	char str3[] = "ABCsrc";
	char to_find[] = "src";

	printf("String: %s\n", str1);
	printf("Searching for: %s\n", to_find);
	printf("%s\n\n", ft_strstr(str1, to_find));

	printf("String: %s\n", str2);
	printf("Searching for: %s\n", to_find);
	printf("%s\n\n", ft_strstr(str2, to_find));

	printf("String: %s\n", str3);
	printf("Searching for: %s\n", to_find);
	printf("%s\n\n", ft_strstr(str3, to_find));
	return (0);
}
