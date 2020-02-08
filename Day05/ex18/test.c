#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main(void)
{
	char str1[50] = "abcdeabcde";
	char str3[50] = "abcdeabcde";
	char str2[] = "ABCDFA";
	unsigned int len;

	len = ft_strlcat(str1, str2, 4);
	printf("%d: %s\n", len, str1);

	len = ft_strlcat(str3, str2, 12);
	printf("%d: %s\n", len, str3);

	return (0);
}
