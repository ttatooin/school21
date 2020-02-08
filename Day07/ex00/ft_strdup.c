#include <stdlib.h>

char	*ft_strdup(char *src)
{
	unsigned int len;
	char *res;

	if (src == 0)
		return 0;
	len = 0;
	while (src[len] != '\0')
		len++;
	res = (char*)malloc(sizeof(char) * (len + 1));
	while (len != 0)
	{
		res[len] = src[len];
		len--;
	}
	return (res);
}
