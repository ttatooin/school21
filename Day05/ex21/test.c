#include <stdio.h>

int	ft_atoi_base(char *str, char *base);

int main(void)
{
	char base2[] = "01";
	char base10[] = "0123456789";
	char base16[] = "0123456789ABCDEF";
	char base8[] = "poneyvif";
	char num2[] = "111001000";
	char num8[] = "-fop";
	char num10[] = "456";
	char num16[] = "+1C8";


	printf("%s converts to: %d\n", num2, ft_atoi_base(num2, base2));
	printf("%s converts to: %d\n", num8, ft_atoi_base(num8, base8));
	printf("%s converts to: %d\n", num10, ft_atoi_base(num10, base10));
	printf("%s converts to: %d\n", num16, ft_atoi_base(num16, base16));

	return (0);
}