#include <stdlib.h>
#include <unistd.h>
#include <stdio.h> //delete
#include "field.h"

field	*read_input(int argc, char **argv);
void	print_field(field *f);
void	print_field_full(field *f);
void	add(field *f, int act);
int	back_brunch(field *f);
void	back(field *f);

void	find_next(field *f, int *act)
{
	int strict;
	int where;
	int what;

	(*act)++;
	while (*act < MAX_HYS)
	{
		strict = *act / 729;
		where = *act % 729 / 9;
		what = *act % 9 + 1;
		if (f->fld[where] == 0 && f->map[where][0] == strict)
			if (f->map[where][what] == 0)
				return;
		(*act)++;
	}
}

int solve(field *f)
{
	int act;
	int step; // delete (debug)


	step = 0; // delete (debug)
	act = 728;
	while (f->fil < 81)
	{
		printf("Step %d\n", ++step); // delete (debug)
		print_field_full(f); // delete
		find_next(f, &act);
		if (act < MAX_HYS)
		{
			printf("Placing... strict: %d, ", act/729); // delete
			printf("coords: (%d, %d), ", act%729/9/9+1, act%729/9%9+1); // delete
			printf("number: %d ", act%9); // delete
			printf("(act: %d)\n\n", act); // delete
			add(f, act);
			act = 728;
		}
		else
		{
			printf("Reversing for another options...\n"); // delete
			act = back_brunch(f);
			if (act / 729 == 0)
			{
				printf("No solution exists.\n");
				return (0);
			}
		}
	}
	return (1);
}

int	main(int argc, char **argv)
{
	field *sudoku;

	if ((sudoku = read_input(argc, argv)) == 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	//print_field_full(sudoku); //delete
	
	if (solve(sudoku) == 1)
	{
		write(1, "Solved\n", 7);
		print_field_full(sudoku);
	}
	else
	{
		write(1, "Error\n", 6);
	}
	
	//write(1, "Input data:\n", 12); //delete
	//print_field_full(sudoku); //delete
	//printf("\n"); //delete

	return (0);
}