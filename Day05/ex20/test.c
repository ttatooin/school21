#include <stdio.h>

int check_radix(char *base);
void ft_putnbr_base(int nbr, char *base);

int main(void)
{
	char base2[] = "01";
	char base10[] = "0123456789";
	char base16[] = "0123456789ABCDEF";
	char base8[] = "poneyvif";
	char bad1[] = "a";
	char bad2[] = "aAbBcCaD";
	char bad3[] = "abcd-f";
	char bad4[] = "abcd@f";
	int nbr;

	puts("Checking bases:");
	printf("Base %s: %d\n", base2, check_radix(base2));
	printf("Base %s: %d\n", base10, check_radix(base10));
	printf("Base %s: %d\n", base16, check_radix(base16));
	printf("Base %s: %d\n", base8, check_radix(base8));
	printf("Base %s: %d\n", bad1, check_radix(bad1));
	printf("Base %s: %d\n", bad2, check_radix(bad2));
	printf("Base %s: %d\n", bad3, check_radix(bad3));
	printf("Base %s: %d\n", bad4, check_radix(bad4));

	puts("\nChecking conversions:");
	nbr = -456;

	printf("%d to base2: ", nbr);
	ft_putnbr_base(nbr, base2);
	printf("\n");

	printf("%d to base10: ", nbr);
	ft_putnbr_base(nbr, base10);
	printf("\n");

	printf("%d to base16: ", nbr);
	ft_putnbr_base(nbr, base16);
	printf("\n");

	printf("%d to base8: ", nbr);
	ft_putnbr_base(nbr, base8);
	printf("\n");

	return (0);
}