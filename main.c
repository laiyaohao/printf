#include "ft_printf.h"

int main(int argc, char **argv)
{
	char prompt[20] = "fake printf: %u\n";
	char sample[10] = "sample";
	// if (argc == 2) {
	int i = ft_printf(prompt, 21474836);
	printf("apa long max int: %u\n", UINT_MAX);
	// write(1, "end of main\n", 12);
	// }
	int j = printf("true printf: %u\n", 21474836);
	printf("\nans from fake printf: %i\n", i);
	printf("ans from true printf: %i\n", j);
	return 0;
}

// int main(void)
// {
// 	// int k = 10;
// 	int i = ft_printf("%d ff", 12);
// 	write(1, "end of main\n", 12);
	
// 	return 0;
// }