#include <stdio.h>

char	*ft_strncat(char *dest, char *src, int nb)
{
	unsigned int end;
	int itr;

	if (dest == 0 || src == 0 || src[0] == '\0')
		return (dest);	
	end = 0;
	while (dest[end] != '\0')
		end++;
	itr = 0;
	while (src[itr] != '\0' && itr < nb)
	{
		dest[end + itr] = src[itr];
		itr++;
	}
	dest[end + itr + 1] = '\0';
	return (dest);
}
