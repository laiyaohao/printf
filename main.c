#include "ft_printf.h"

int main(int argc, char **argv)
{
	char sample[20] = "haha%d,";
	// if (argc == 2) {
	int i = ft_printf(sample, 123);
	write(1, "end of main\n", 12);
	// }
	return 0;
}

// int main(void)
// {
// 	// int k = 10;
// 	int i = ft_printf("%d ff", 12);
// 	write(1, "end of main\n", 12);
	
// 	return 0;
// }