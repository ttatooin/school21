#include <stdio.h>

int	count_words(char *str);
char	**ft_split_whitespace(char *str);

int		main(int argc, char** argv)
{
	int itr;
	char **arr;

	if (argc <= 1)
		return (0);
	printf("Total words: %d\n", count_words(argv[1]));
	arr = ft_split_whitespace(argv[1]);
	printf("Array is:\n");

	itr = 0;
	while (arr[itr] != 0)
	{
		printf("%s\n", arr[itr]);
		itr++;
	}

	return (1);
}