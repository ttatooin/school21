#include <stdio.h>

int	ft_str_is_printable(char *str);

int main(void)
{
	char str1[] = "abcDe";
	char str2[] = "cd1yz";
	char str3[] = "two words";
	char str4[] = "newline\n";
	char str5[] = "ASDF";

	printf("%s: %d\n", str1, ft_str_is_printable(str1));
	printf("%s: %d\n", str2, ft_str_is_printable(str2));
	printf("%s: %d\n", str3, ft_str_is_printable(str3));
	printf("%s: %d\n", str4, ft_str_is_printable(str4));
	printf("%s: %d\n", str5, ft_str_is_printable(str5));

	return (0);
}