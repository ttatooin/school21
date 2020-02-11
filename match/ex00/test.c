#include <stdio.h>

int	match(char *s1, char *s2);

int main(int argc, char** argv)
{
	if (argc != 3)
	{
		puts("Input incorrect.");
		return (0);
	}

	printf("Matching [%s] and [%s]:\n", argv[1], argv[2]);
	if (match(argv[1], argv[2]) == 1)
		puts("Matched!");
	else
		puts("Not matched!");
	return (0);
}