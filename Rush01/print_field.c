#include <unistd.h>
#include "field.h"
#include <stdio.h> //delete

int		ft_putchar(char c);

void	print_field(field *f)
{
	int itr;

	itr = 0;
	while (itr < 81)
	{
		if (f->fld[itr] > 0)
			ft_putchar('0' + f->fld[itr]);
		else
			ft_putchar('.');
		if (itr % 9 == 8)
			ft_putchar('\n');
		itr++;
	}
}

void	print_field_full(field *f) // delete, created for debug purposes
{
	int row;
	int col;

	puts("=========================");
	printf("Filled %d of 81\n", f->fil);
	puts("-------------------------");	
	row = 0;
	while (row < 9)
	{
		col = 0;
		while (col < 9)
		{
			if (f->fld[row * 9 + col] > 0)
				ft_putchar('0' + f->fld[row * 9 + col]);
			else
				ft_putchar('.');
			col++;
			if (col % 3 == 0)
				ft_putchar('|');
		}
		ft_putchar(' ');
		ft_putchar('|');
		col = 0;
		while (col < 9)
		{
			ft_putchar('0' + f->map[row * 9 + col][0]);
			col++;
			if (col % 3 == 0 && col != 9)
				ft_putchar('|');
		}
		ft_putchar('\n');
		row++;
		if(row % 3 == 0 && row != 9)
			puts("---+---+---| |---+---+---");
	}
	puts("-------------------------");
}