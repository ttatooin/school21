#include <stdio.h>

int	ft_str_is_numeric(char *str);

int main(void)
{
	char str1[] = "abcDe";
	char str2[] = "cd1yz";
	char str3[] = "two words";
	char str4[] = "4634";
	char str5[] = "-36";
	char str6[] = "26 34";

	printf("%s: %d\n", str1, ft_str_is_numeric(str1));
	printf("%s: %d\n", str2, ft_str_is_numeric(str2));
	printf("%s: %d\n", str3, ft_str_is_numeric(str3));
	printf("%s: %d\n", str4, ft_str_is_numeric(str4));
	printf("%s: %d\n", str5, ft_str_is_numeric(str5));
	printf("%s: %d\n", str6, ft_str_is_numeric(str6));

	return (0);
}