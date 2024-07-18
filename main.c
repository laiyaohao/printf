#include "ft_printf.h"

// int main(int argc, char **argv)
// {
// 	if (argc == 3) {
// 	int i = ft_printf(argv[1], argv[2]);
// 	// write(1, "end of main\n", 12);
// 	}
// 	return 0;
// }

int main(void)
{
	int k = 10;
	int i = ft_printf("%p", &k);
	// write(1, "end of main\n", 12);
	
	return 0;
}