#include <stdio.h>

void ft_ultimate_ft(int *********nbr);

int main(void)
{
		int i;
		int *pi;
		int **ppi;
		int ***pppi;
		int ****ppppi;
		int *****pppppi;
		int ******ppppppi;
		int *******pppppppi;
		int ********ppppppppi;
		int *********pppppppppi;

		pi = &i;
		ppi = &pi;
		pppi = &ppi;
		ppppi = &pppi;
		pppppi = &ppppi;
		ppppppi = &pppppi;
		pppppppi = &ppppppi;
		ppppppppi = &pppppppi;
		pppppppppi = &ppppppppi;

		ft_ultimate_ft(pppppppppi);
		printf("%d", i);
		return 0;
}
