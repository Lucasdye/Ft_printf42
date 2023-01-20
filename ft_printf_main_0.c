#include "ft_printf_0.h"

int		main(int ac, char **av)
{
	if (ac != 2)
		ft_putstr(""RED"Wrong argument number"RESET_COLOR"\n");

	ft_printf_0_0(av[1]);
	return (0);
}