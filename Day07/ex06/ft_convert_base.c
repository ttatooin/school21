#include <stdlib.h>
#include <stdio.h>

int		to_number(char *nbr, char *base)
{
	int res;
	int itr;
	int dig;
	int rdx;

	rdx = 0;
	while (base[rdx] != '\0')
		rdx++;
	res = 0;
	itr = 0;
	while (nbr[itr] != '\0')
	{
		dig = 0;
		while (base[dig] != nbr[itr])
			dig++;
		res = res * rdx + dig;
		itr++;
	}
	return (res);
}

char	*to_string(int nbr, char *base)
{
	int		order;
	int		rdx;
	int		tmp;
	char	*res;

	rdx = 0;
	while (base[rdx] != '\0')
		rdx++;	
	order = 1;
	tmp = 1;
	while (nbr / order > rdx)
	{
		order *= rdx;
		tmp++;
	}
	res = (char*)malloc(sizeof(char) * (tmp + 1));
	tmp = 0;
	while (order > 0)
	{
		res[tmp++] = base[nbr / order];
		nbr %= order;
		order /= rdx;
	}
	res[tmp] = '\0';
	return (res);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int tmp;

	tmp = to_number(nbr, base_from);
	free(nbr);
	nbr = to_string(tmp, base_to);
	return (nbr);
}