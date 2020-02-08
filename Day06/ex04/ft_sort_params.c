#include <stdio.h>

int		ft_putchar(char c);

int		compare(char *s1, char *s2)
{
	unsigned int itr;

	itr = 0;
	while (1)
	{
		if (s1[itr] > s2[itr])
			return (1);
		else if (s1[itr] < s2[itr])
			return (-1);
		else if(s1[itr] == '\0' || s2[itr] == '\0')
			return (0);
		itr++;
	}
}

void	sort_strings(char **str, int size)
{
	char *tmp;
	int itr;
	int cnt;

	itr = 0;
	while (itr < size - 1)
	{
		cnt = 0;
		while (cnt < size - 1)
		{
			if (compare(str[cnt], str[cnt + 1]) == 1)
			{
				tmp = str[cnt];
				str[cnt] = str[cnt + 1];
				str[cnt + 1] = tmp;
			}
			cnt++;
		}
		itr++;
	}
}

int		main(int argc, char **argv)
{
	int itr;
	unsigned int pos;

	sort_strings(argv + 1, argc - 1);
	itr = 1;
	while (itr < argc)
	{
		pos = 0;
		while (argv[itr][pos] != '\0')
		{
			ft_putchar(argv[itr][pos]);
			pos++;
		}
		ft_putchar('\n');
		itr++;
	}
	return (0);
}
	
