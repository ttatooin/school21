#include <stdlib.h>

int		is_delim(char smb)
{
	char delim[] = {' ', '\n', '\t', '\0'};
	int itr;

	itr = 0;
	while (itr < 4)
	{
		if (smb == delim[itr])
			return (1);
		itr++;
	}
	return (0);
}

int	count_words(char *str)
{
	int res;
	int itr;

	if (str == 0 || str[0] == '\0')
		return (0);
	res = 0;
	itr = 0;
	while (str[itr] != '\0')
	{
		if (is_delim(str[itr]) == 0 && is_delim(str[itr + 1]) == 1)
			res++;
		itr++;
	}
	return (res);
}

char	*create_word(char *str, int pos)
{
	int itr;
	char *res;

	itr = 1;
	while (is_delim(str[pos + itr]) == 0)
		itr++;
	res = (char*)malloc(sizeof(char) * (itr + 1));
	res[itr] = '\0';
	itr--;
	while (itr >= 0)
	{
		res[itr] = str[pos + itr];
		itr--;
	}
	return (res);
}

char	**ft_split_whitespaces(char *str)
{
	int itr;
	int wrd;
	char **arr;

	arr = (char**)malloc(sizeof(char*) * (count_words(str) + 1));
	wrd = 0;
	itr = 0;
	while (str[itr] != '\0')
	{
		if (is_delim(str[itr]) == 0)
		{
			arr[wrd] = create_word(str, itr);
			wrd++;
			while (is_delim(str[itr]) == 0)
				itr++;
		}
		else
			itr++;
	}
	arr[wrd] = 0;
	return (arr);
}