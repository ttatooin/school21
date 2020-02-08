#include <stdlib.h>
#include <stdio.h>

int		cnt_smb(int argc, char **argv)
{
	int res;
	int wrd;
	int itr;

	res = 0;
	wrd = 1;
	while (wrd < argc)
	{
		itr = 0;
		while (argv[wrd][itr] != '\0')
		{
			itr++;
			res++;
		}
		res++;
		wrd++;
	}
	return (res);
}

char	*ft_concat_params(int argc, char **argv)
{
	int 	wrd;
	int 	itr;
	char	*res;
	int		rsi;

	if (argc < 1)
		return (0);
	res = (char*)malloc(sizeof(int) * cnt_smb(argc, argv));
	rsi = 0;
	wrd = 1;
	while (wrd < argc)
	{
		itr = 0;
		while (argv[wrd][itr] != '\0')
		{
			res[rsi++] = argv[wrd][itr];
			itr++;
		}
		if (wrd < argc - 1)
			res[rsi++] = '\n';
		else
			res[rsi++] = '\0';
		wrd++;
	}
	return (res);
}
