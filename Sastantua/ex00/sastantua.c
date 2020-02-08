#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		abs(int nb)
{
	if (nb >= 0)
		return nb;
	else
		return -nb;
}

// type 0: all *
// type 1: * and |
// type 2: * and | and $
void	print_row(int width_v, int width_t, int size, int type)
{
	int pos;
	int middle;
	int radius;

	pos = 1;
	radius = width_v / 2;
	middle = width_t / 2 + 1;
	while (pos <= width_t)
	{
		if (abs(pos - middle) > radius)
			ft_putchar('-');
		else if (pos - middle == -radius)
			ft_putchar('/');
		else if (pos - middle == radius)
			ft_putchar('\\');
		else if (type == 2 && size >= 5 && pos - middle == (size - 3) / 2)
			ft_putchar('$');
		else if (type != 0 && abs(pos - middle) <= (size - 1) / 2)
			ft_putchar('|');
		else
			ft_putchar('*');
		pos++;
	}
	ft_putchar('\n');
}

void sastantua(int size)
{
	int width_t;
	int curstg;
	int curline;
	int type;

	width_t = size * size + 11 * size - 5;
	curstg = 1;
	while (curstg <= size)
	{
		curline = 1;
		while (curline <= curstg + 2)
		{
			if (curstg == size && size >= 5 && 2 + size - curline == (size - 1) / 2)
				type = 2;
			else if (curstg == size && 2 + size - curline < ((size - 1) / 2) * 2 + 1)
				type = 1;
			else
				type = 0;
			print_row((curstg + 4) * (curstg - 1) + 2 * curline + 6 * curstg - 5, width_t, size, type);
			curline++;
		}
		curstg++;
	}
}

int main(void)
{
	sastantua(1);
	sastantua(2);
	sastantua(3);
	sastantua(4);
	sastantua(5);
	sastantua(6);
	sastantua(7);
	return (0);
}
