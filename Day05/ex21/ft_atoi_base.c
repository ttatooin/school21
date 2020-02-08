int	check_radix(char *base)
{
	unsigned int itr;
	unsigned int tmp;

	if (base == 0 || base[0] == '\0' || base[1] == '\0')
		return 0;
	itr = 0;
	while (base[itr] != '\0')
	{
		if (base[itr] < 'a' || base[itr] > 'z')
			if (base[itr] < 'A' || base[itr] > 'Z')
				if (base[itr] < '0' || base[itr] > '9')
					return (0);
		tmp = 0;
		while (tmp < itr)
		{
			if (base[tmp] == base[itr])
				return (0);
			tmp++;
		}
		itr++;
	}
	return (itr);
}

int	check_str(char *str, char *base)
{
	unsigned int itr;
	unsigned int tmp;

	if (str == 0 || str[0] == '\0')
		return 0;
	itr = 0;
	if (str[itr] == '+' || str[itr] == '-')
		itr++;
	while (str[itr] != '\0')
	{
		tmp = 0;
		while (1)
		{
			if (base[tmp] == '\0')
				return (0);
			else if(str[itr] == base[tmp])
				break;
			tmp++;
		}
		itr++;
	}
	return (1);
}

int get_num(char c, char *base)
{
	unsigned int itr;

	itr = 0;
	while (base[itr] != '\0')
	{
		if (c == base[itr])
			return (itr);
		itr++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int radix;
	int res;
	unsigned int itr;

	if ((radix = check_radix(base)) <= 1)
		return (0);
	if (check_str(str, base) == 0)
		return (0);
	itr = 0;
	if (str[itr] == '+' || str[itr] == '-')
		itr++;
	res = 0;
	while (str[itr] != '\0')
	{
		res *= radix;
		res += get_num(str[itr], base);
		itr++;
	}
	if (str[0] == '-')
		res *= -1;
	return (res);
}
