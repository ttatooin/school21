#include <stdio.h>

char *ft_strcat(char *dest, char *src);

int main(void)
{
	char dest1[100] = {'F', 'i', 'r', 's', 't', '\0'};
	char dest2[100] = "Third";
	char src[] = "Second";

	printf("%s + %s is:\n", dest1, src);
	printf("%s\n\n", ft_strcat(dest1, src));

	printf("%s + %s is:\n", dest2, src);
	printf("%s\n", ft_strcat(dest2, src));
	
	return (0);
}
