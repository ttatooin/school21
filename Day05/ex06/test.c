#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int main(void)
{
	char str1[] = "qwerty";
	char str2[] = "qwerpy";
	char str3[] = "qwerty";
	char str4[] = "qwertyabc";
	char str5[] = "qwer";

	printf("Comparing <%s> and <%s>: %d\n", str1, str2, ft_strcmp(str1, str2));
	printf("Comparing <%s> and <%s>: %d\n", str1, str3, ft_strcmp(str1, str3));
	printf("Comparing <%s> and <%s>: %d\n", str1, str4, ft_strcmp(str1, str4));
	printf("Comparing <%s> and <%s>: %d\n", str1, str5, ft_strcmp(str1, str5));

	return (0);
}