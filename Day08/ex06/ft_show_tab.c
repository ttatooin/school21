#include "ft_stock_par.h"

int		ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	int order;

	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	order = 1;
	while (nb / order > 10)
		order *= 10;
	while (order > 0)
	{
		ft_putchar('0' + nb / order);
		nb %= order;
		order /= 10;
	}
}

void	ft_show_tab(struct s_stock_par *par)
{
	char **tstr;

	while (par->str != 0)
	{
		ft_putstr(par->str);
		ft_putchar('\n');
		ft_putnbr(par->size_param);
		ft_putchar('\n');
		tstr = par->tab;
		while (*tstr != 0)
		{
			ft_putstr(*tstr);
			ft_putchar('\n');
			tstr++;
		}
		ft_putchar('\n');
		par++;
	}
}