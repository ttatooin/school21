#include <stdio.h>
#include "ft_stock_par.h"

struct s_stock_par	*ft_param_to_tab(int ac, char **av);
void	ft_show_tab(struct s_stock_par *par);

void	test_show_tab(struct s_stock_par *par)
{
	int itr;
	int wrd;

	itr = 0;
	while (par[itr].str != 0)
	{
		printf("String %d\n", itr);
		printf(">size_param: %d\n", par[itr].size_param);
		printf(">str: %s\n", par[itr].str);
		printf(">words:\n");
		wrd = 0;
		while (par[itr].tab[wrd] != 0)
		{
			printf(">>%s\n", par[itr].tab[wrd]);
			wrd++;
		}
		itr++;
		if (itr == 10)
		{
			printf("Too many strings.\n");
			return;
		}
	}
}

int	main(int argc, char** argv)
{
	t_stock_par *arr;

	arr = ft_param_to_tab(argc, argv);
	//printf("Test output:\n");
	//test_show_tab(arr);
	//printf("Main output:\n");
	ft_show_tab(arr);
	
	return (0);
}