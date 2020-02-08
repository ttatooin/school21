#include <stdio.h>

int ft_strlen(char *str);

int main(void)
{
	char *str;
	
	str = "ttatooin";
	printf("%s > %d", str, ft_strlen(str));
	return (0);
}
