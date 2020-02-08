#include <stdlib.h>
#include "ft_stock_par.h"

char	**ft_split_whitespaces(char *str);

int		string_length(char* str)
{
	int res;

	res = 0;
	while (str[res] != '\0')
		res++;
	return (res);
}

char	*clone_string(char *str)
{
	char *res;
	int len;
	int itr;

	len = string_length(str);
	res = (char*)malloc(sizeof(char) * (len + 1));
	itr = 0;
	while (itr <= len)
	{
		res[itr] = str[itr];
		itr++;
	}
	return (res);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par *res;
	int itr;

	res = (t_stock_par*)malloc(sizeof(t_stock_par) * (ac + 1));
	itr = 0;
	while (itr < ac)
	{
		res[itr].size_param = string_length(av[itr]);
		res[itr].str = clone_string(av[itr]);
		res[itr].copy = clone_string(av[itr]);
		res[itr].tab = ft_split_whitespaces(av[itr]);
		itr++;
	}
	res[itr].str = 0;
	return (res);
}