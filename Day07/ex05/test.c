#include <stdio.h>

char	**ft_split_whitespaces(char *str);
void	ft_print_words_tables(char **tab);

int		main(int argc, char** argv)
{
	char **arr;

	if (argc <= 1)
		return (0);
	arr = ft_split_whitespaces(argv[1]);
	printf("Array is:\n");
	ft_print_words_tables(arr);

	return (1);
}