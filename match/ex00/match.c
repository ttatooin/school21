#include <stdio.h> // delete

void print_part(char *str, int from) // delete
{
	int itr;

	itr = 0;
	while (str[itr] != '\0')
	{
		if (itr == from)
			printf("|");
		printf("%c", str[itr]);
		itr++;
	}
}

int cmp_substr(char *s1, int *f1, char *s2, int *f2)
{
	int itr;

	printf(">Checking ["); // delete
	print_part(s1, *f1); // delete
	printf("] and ["); // delete
	print_part(s2, *f2); // delete
	printf("]: "); // delete
	itr = 0;
	while (1)
	{
		if (s2[*f2 + itr] == '*')
			break;
		if (s2[*f2 + itr] != s1[*f1 + itr])
		{
			printf("0\n"); // delete
			return 0;
		}
		if (s1[*f1 + itr] == '\0' && s2[*f2 + itr] == '\0')
			break;
		itr++;
	}
	*f1 += itr;
	*f2 += itr;
	printf("1\n"); // delete
	return (1);
}


int	match(char *s1, char *s2)
{
	int itr1;
	int itr2;
	
	itr1 = 0;
	itr2 = 0;
	if (s2[itr2] != '*')
		if (cmp_substr(s1, &itr1, s2, &itr2) == 0)
			return (0);
	while (s2[itr2] != '\0')
		if (s2[itr2] == '*')
		{
			itr2++;
			continue;
		}
		else
		{
			while (1)
				if (s1[itr1] == '\0')
					return (0);
				else if (cmp_substr(s1, &itr1, s2, &itr2) == 1)
					break;
				else
					itr1++;
		} 
	return (1);
}
