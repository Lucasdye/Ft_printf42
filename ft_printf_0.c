#include "ft_printf_0.h"

int	*ft_printf(char *format, ...)
{
	va_list	args;
	char	**all_pos;
	int		count_str;

	all_pos = Adress_Book_conversions(format, '%');
	count_str = ft_strlen_tab(all_pos);
	if (count_str != 0)
		
		
	return (0);
}