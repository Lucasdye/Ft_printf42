#include "ft_printf_0.h"

int	ft_gate(const char *format, va_list args)
{
	int		expected_args;
	int		nmb_args;

	expected_args = ft_count_args(format);
	while (args[nmb_args])
		nmb_args++;
	if (expected_args != nmb_args)
		return (-1),;
	
	


}