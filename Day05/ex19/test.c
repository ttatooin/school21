#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main(void)
{
	char str1[] = "abcdeabcde";
	char str3[] = "abcdeabcde";
	char str2[] = "ABCDFA";
	unsigned int len;

	len = ft_strlcpy(str1, str2, 4);
	printf("%d: %s\n", len, str1);

	len = ft_strlcpy(str3, str2, 12);
	printf("%d: %s\n", len, str3);

	return (0);
}
