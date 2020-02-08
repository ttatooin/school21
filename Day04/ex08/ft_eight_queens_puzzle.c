int absol(int nb)
{
	if (nb < 0)
		nb *= -1;
	return (nb);
}

int	check_pos(int *qns)
{
	int itr;
	int cur;

	itr = 1;
	cur = qns[0];
	while (itr < cur)
	{
		if (qns[itr] == qns[cur] || absol(itr - cur) == absol(qns[itr] - qns[cur]))
			return (0);
		itr++;
	}
	return (1);
}

int	ft_eight_queens_puzzle(void)
{
	static int qns[9] = {1, 0, 0, 0, 0, 0, 0, 0, 0};
	int res;
	int itr;

	res = 0;
	itr = 1;
	while (itr <= 8)
	{
		qns[qns[0]] = itr++;
		if (check_pos(qns) == 1)
		{
			if (qns[0] == 8)
			{
				qns[0]--;
				return (1);
			}
			else
			{
				qns[0]++;
				res += ft_eight_queens_puzzle();
			}
		}
	}
	qns[0]--;
	return (res);
}	
