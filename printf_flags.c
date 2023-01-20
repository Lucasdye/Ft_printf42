#include "ft_printf_0.h"

int	main(int	ac, char ** av)
{	
	unsigned int	ui = -5;
	int			i = 50;
	int			i2 = -5;
	float	f = 105;
	char tab[10];

	if (ac != 2)
		printf(""RED"WRONG NUMBER OF ARGUMENTS"RESET_COLOR"\n");
	printf("hhhh%dhhh", i2);
	//printf("hhh% shhh\n", (av[1]));
	//printf("hhh% 10shhh\n", (av[1]));
	return 0;
}