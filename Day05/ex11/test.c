#include <stdio.h>

int	ft_str_is_alpha(char *str);

int main(void)
{
	char str1[] = "abcDe";
	char str2[] = "cd1yz";
	char str3[] = "two words";

	printf("%s: %d\n", str1, ft_str_is_alpha(str1));
	printf("%s: %d\n", str2, ft_str_is_alpha(str2));
	printf("%s: %d\n", str3, ft_str_is_alpha(str3));

	return (0);
}