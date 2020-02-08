int	ft_putchar(char c);

void print(int *qns)
{
	int i;

	i = 1;
	while (i <= 8)
		ft_putchar('0' + qns[i++]);
	ft_putchar('\n');
}

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

void	ft_eight_queens_puzzle_2(void)
{
	static int qns[9] = {1, 0, 0, 0, 0, 0, 0, 0, 0};
	//int res;
	int itr;

	//res = 0;
	itr = 1;
	while (itr <= 8)
	{
		qns[qns[0]] = itr++;
		if (check_pos(qns) == 1)
		{
			if (qns[0] == 8)
			{
				qns[0]--;
				print(qns);
				return;
			}
			else
			{
				qns[0]++;
				ft_eight_queens_puzzle_2();
			}
		}
	}
	qns[0]--;
	//return (res);
}	
