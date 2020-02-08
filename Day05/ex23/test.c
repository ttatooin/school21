#include <stdio.h>

void	*ft_print_memory(void *addr, unsigned int size);

int main(void)
{
	char str[] = "Salut les aminches c'est cool show mem on fait de truc terrible.\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

	ft_print_memory(str, 79);

	return (0);
}