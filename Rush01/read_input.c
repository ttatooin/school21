#include <stdlib.h>
#include <unistd.h>
#include "field.h"

void	add(field *f, int act);
void	print_field_full(field *f); //delete

int check_input(int argc, char **argv)
{
	int row;
	int col;

	if (argc != 10)
		return (0);
	row = 1;
	while (row <= 9)
	{
		col = 0;
		while (col < 9)
		{
			if (argv[row][col] < '1' && argv[row][col] > '9')
				if (argv[row][col] != '.')
					return (0);
			col++;
		}
		if (argv[row][col] != '\0')
			return (0);
		row++;
	}
	return (1);
}

field *create_field()
{
	field *res;
	int itr;
	int imp;

	res = (field*)malloc(sizeof(field));
	res->fil = 0;
	itr = 0;
	while (itr < 81)
	{
		res->fld[itr] = 0;
		res->map[itr][0] = 9;
		imp = 1;
		while (imp <= 9)
		{
			res->map[itr][imp] = 0;
			imp++;
		}
		itr++;
	}
	return (res);
}

field	*read_input(int argc, char **argv)
{
	field *res;
	int row;
	int col;

	if (check_input(argc, argv) == 0)
		return (0);
	res = create_field();
	//print_field_full(res); // delete
	row = 1;
	while (row < argc)
	{
		col = 0;
		while (col < 9)
		{
			if (argv[row][col] != '.')
			//{ // delete
				add(res, ((row - 1) * 9 + col) * 9 + argv[row][col] - '1');
				//print_field_full(res); //delete
			//} // delete 
			col++;
		}
		row++;
	}
	return (res);
}