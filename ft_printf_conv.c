#include "ft_printf_0.h"

char *ft_printf_conv(char *str, va_list args)
{
	char	*str_brut;
	char	*str_converted;
	char	*str_flag;
	char	*str_converted&flagged;
	char	*strtmp_cpy;
	
	strtmp_cpy = ft_strdup(str);

	str_brut = ft_strdup_bytes_free(strtmp_cpy, ft_size_p_brut(brut));
	if (ft_conv_identifier(str_brut + 1) == ('d' || 'i' || 'u' || 'x' || 'X')) //TYPE INT
		ft_convert_to_char(p_brut + 1, args, 1);

	else if (ft_conv_identifier(p_brut + 1) == 'c')//TYPE CHAR
		ft_convert_to_char(p_brut, args, 2)

	else if (ft_conv_identifier(p_brut + 1) == 's')//TYPE POINTER
		ft_convert_to_char(p_brut, args, 3)
	else if (ft_conv_identifier(p_brut + 1) == 'p')//PARTICULIAR
		ft_convert_to_char(p_brut, args, 3)
	
	else if (ft_strrchr(p_brut + 1) == '%', 0)//IGNORE





}