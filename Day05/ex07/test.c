#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
	char str1[] = "qwerty";
	char str2[] = "qwerpy";
	char str3[] = "qwerty";
	char str4[] = "qwertyabc";
	char str5[] = "qwer";

	printf("Comparing <%s> and <%s>: %d\n", str1, str2, ft_strncmp(str1, str2, 5));
	printf("Comparing <%s> and <%s>: %d\n", str1, str2, ft_strncmp(str1, str2, 3));
	printf("Comparing <%s> and <%s>: %d\n", str1, str3, ft_strncmp(str1, str3, 5));
	printf("Comparing <%s> and <%s>: %d\n", str1, str4, ft_strncmp(str1, str4, 5));
	printf("Comparing <%s> and <%s>: %d\n", str1, str5, ft_strncmp(str1, str5, 5));

	return (0);
}