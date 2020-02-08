#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	unsigned int end;
	unsigned int itr;

	if (dest == 0 || src == 0 || src[0] == '\0')
		return (dest);	
	end = 0;
	while (dest[end] != '\0')
		end++;
	itr = 0;
	while (src[itr] != '\0')
	{
		dest[end + itr] = src[itr];
		itr++;
	}
	return (dest);
}
