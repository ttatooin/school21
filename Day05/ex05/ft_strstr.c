#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int itr;
	unsigned int chr;

	if (to_find[0] == '\0')
		return (str);
	itr = 0;
	while (str[itr] != '\0')
	{
		chr = 0;
		while (to_find[chr] != '\0')
		{
			if (str[itr + chr] == to_find[chr])
				chr++;
			else
				break;
		}
		if (to_find[chr] == '\0')
			return (str + itr);
		itr++;
	}
	return (0);
}