#include <stdlib.h>

void	ft_takes_place(int hour);

int main()
{
	int itr;

	itr = 0;
	while (itr <= 23)
		ft_takes_place(itr++);
	return (0);
}