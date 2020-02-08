#include <stdlib.h>

int		is_delim(char smb, char *cst)
{
	int itr;

	itr = 0;
	while (cst[itr] != '\0')
	{
		if (smb == cst[itr])
			return (1);
		itr++;
	}
	return (0);
}

int	count_words(char *str, char *cst)
{
	int res;
	int itr;

	if (str == 0 || str[0] == '\0')
		return (0);
	res = 0;
	itr = 0;
	while (str[itr] != '\0')
	{
		if (is_delim(str[itr], cst) == 0 && is_delim(str[itr + 1], cst) == 1)
			res++;
		itr++;
	}
	return (res);
}

char	*create_word(char *str, int pos, char *cst)
{
	int itr;
	char *res;

	itr = 1;
	while (is_delim(str[pos + itr], cst) == 0)
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

char	**ft_split(char *str, char *charset)
{
	int itr;
	int wrd;
	char **arr;

	arr = (char**)malloc(sizeof(char*) * (count_words(str, charset) + 1));
	wrd = 0;
	itr = 0;
	while (str[itr] != '\0')
	{
		if (is_delim(str[itr], charset) == 0)
		{
			arr[wrd] = create_word(str, itr, charset);
			wrd++;
			while (is_delim(str[itr], charset) == 0)
				itr++;
		}
		else
			itr++;
	}
	arr[wrd] = 0;
	return (arr);
}