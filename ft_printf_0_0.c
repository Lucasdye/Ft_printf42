#include "ft_printf_0.h"

int		ft_printf_0_0(char *format, ...)
{
	va_list	args;
	char	*arg_converted;
	char	conv_encountered;
	int	j;
	int i;


	j = 0;
	i = 0;

	// WHEN NO ARGS
	if (ft_count_args(format) == 0) 
	{
		ft_putformat(format);
		return ((int )ft_strlen(format));
	}

	// WHEN ARGS EXIST
	va_start(args, format);

	while (format[i])
	{
		while (format[i] != '%')
			ft_putchar(format[i++]);

		conv_encountered = ft_conv_identifier(format + i);
		//INT TYPE
		if (conv_encountered == ('d' || 'i' || 'p' ||'u' || 'x' || 'X')) 
		{	
			va_arg(args, int);
			arg_converted = ft_itoa_dec_printf(args, format + i);
			ft_putstr(arg_converted);
			/*if (conv_encountered == ('p'))//HEXA
				str_converted = ft_itoa_to_hex(args);
			if (conv_encountered = ('x' || 'X'))//FAKE HEXA
				str_converted = ft_itoa_xX(args);*/
			
		}
		//CHAR TYPE
		if (conv_encountered == 'c')
		{	
			va_arg(args, char);
			arg_converted = ft_chartochar(args);
		}
		//POINTER TYPE
		if (conv_encountered == 's')
		{
			va_args(args, char *);
			arg_converted = ft_strtostr(args);
		}
		ft_putstr(arg_converted);
		//i += ft_strlen(arg_converted);	
	}

	return (i);
}