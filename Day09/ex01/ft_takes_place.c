#include <stdio.h>
#include <unistd.h>

void	print_hour(int hour)
{
	int m;

	if (hour >= 0 && hour <= 11)
		m = 0;
	else
		m = 1;

	hour %= 12;
	if (hour == 0)
		hour = 12;
	printf("%d", hour);
	printf(".00 ");
	if (m == 0)
		printf("A.M.");
	else
		printf("P.M.");
}

void	ft_takes_place(int hour)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	print_hour(hour);
	printf(" AND ");
	print_hour(hour + 1);
	printf("\n");
}