#include <stdio.h>

char	*ft_strdup(char *src);

int main(int argc, char **argv)
{
	char *str;

	if (argc == 0)
		return (0);
	str = argv[1];
	printf("Created: %s\n", str);
	return (0);
}