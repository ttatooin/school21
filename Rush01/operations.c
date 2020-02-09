#include <stdio.h> // delete
#include "field.h"

void	add(field *f, int act)
{
	int itr;
	int where;
	int what;

	where = act % 729 / 9;
	what = act % 9 + 1;
	f->fil++;
	f->hys[f->fil] = act;
	f->fld[where] = what;
	itr = 0;
	while (itr < 9)
	{
		if (f->map[where - where % 9 + itr][what] == 0)
			f->map[where - where % 9 + itr][0] -= 1;
		f->map[where - where % 9 + itr][what] += 1;
		if(f->map[itr * 9 + where % 9][what] == 0)
			f->map[itr * 9 + where % 9][0] -= 1;
		f->map[itr * 9 + where % 9][what] += 1;
		itr++;
	}
}

void	back(field *f)
{
	int itr;
	int where;
	int what;

	where = f->hys[f->fil] % 729 / 9;
	what = f->hys[f->fil] % 9 + 1;
	f->fil--;
	f->fld[where] = 0;
	itr = 0;
	while (itr < 9)
	{
		if (f->map[where - where % 9 + itr][what] == 1)
			f->map[where - where % 9 + itr][0] += 1;
		f->map[where - where % 9 + itr][what] -= 1;
		if(f->map[itr * 9 + where % 9][what] == 1)
			f->map[itr * 9 + where % 9][0] += 1;
		f->map[itr * 9 + where % 9][what] -= 1;
		itr++;
	}
}

int		check_remain_options(field *f)
{
	int where;
	int what;
	int itr;

	where = f->hys[f->fil] % 729 / 9;
	what = f->hys[f->fil] % 9 + 1;
	itr = what + 1;
	printf("Hystory: %d, ", f->fil);
	printf("Remaining options (was %d): ", what);
	while (itr <= 9)
	{
		printf("%d-%d ", itr, f->map[where][itr]);
		if (f->map[where][itr] == 0)
		{
			printf("\n");
			return (1);
		}
		itr++;
	}
	printf("\n");
	return (0);
}

int		back_brunch(field *f)
{
	int res;

	while (1)
	{
		res = f->hys[f->fil];
		if (res / 729 == 0)
			break;
		else if (check_remain_options(f) == 0)
		{
			back(f);
			continue;
		}
		else
		{
			back(f);
			break;
		}
	}
	return (res);
}