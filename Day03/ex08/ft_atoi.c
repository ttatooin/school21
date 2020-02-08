#include <stdio.h>

int		ft_atoi(char *str)
{
	int num;
	int pos;

	num = 0;
	pos = 0;
	if (str == 0 || str[0] == '0')
		return (0);
	if (str[0] == '-')
		pos++;
	while (str[pos] != '\0')
	{
		if (str[pos] >= '0' && str[pos] <= '9')
			num = num * 10 + str[pos] - '0';
		else
			return (0);
		pos++;
	}
	if (str[0] == '-')
		num *= -1;
	return (num);
}
