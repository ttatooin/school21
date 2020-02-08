#include <stdio.h>

char *ft_strrev(char *str);

int main()
{
	char str1[] = "a";
	char str2[] = "ab";
	char str3[] = "abc";
	char str4[] = "abcd";
	char str5[] = "abcde";
	char str6[] = "abcdef";
	printf("%s\n", ft_strrev(str1));
	printf("%s\n", ft_strrev(str2));
	printf("%s\n", ft_strrev(str3));
	printf("%s\n", ft_strrev(str4));
	printf("%s\n", ft_strrev(str5));
	printf("%s\n", ft_strrev(str6));
	return (0);
}
