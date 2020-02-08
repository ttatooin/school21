#include <stdio.h>

char	**ft_split(char *str, char *charset);

int		main(int argc, char** argv)
{
	int itr;
	char **arr;

	if (argc <= 2)
		return (0);
	arr = ft_split(argv[1], argv[2]);
	printf("Array is:\n");

	itr = 0;
	while (arr[itr] != 0)
	{
		printf("%s\n", arr[itr]);
		itr++;
	}

	return (1);
}