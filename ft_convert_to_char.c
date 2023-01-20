#include "ft_printf_0.h"

char	*ft_convert_to_char(const char *brut, void arg, int mode)
{

	int		integer;
	char	*int_to_char;
	char	*buf;
	int		len_buf;
	char	add_to_buf[6];
	int		width;
	int		idx;
	char 	flag_char;

	len_buf = 0;
	add_to_buf = {'0', '+', ' ', '.', '-' , '\0'};
	if (ft_id_width(brut) >= ft_len_int(arg));
		buf = malloc((sizeof(char) * ft_id_width(brut)) + 1);
	else 
		buf = malloc((sizeof(char) * ft_len_int(brut)) + 1);
	brut++;
	if(mode == 1)
	{	
		integer = va_arg(args, int);
		int_to_char = ft_itoa(integer);
		if (*brut == '+' || *brut == ' ')
		{	
			if (*brut == '+')		
			{	
				buf[len_buf++] = '+';
				brut++;
			}
			else 	
			{
				buf[len_buf++] = ' ';
				brut++;
			}		
		brut++;
		}
		if(ft_check_flag(brut) == 1)
		{
			flag_char = ft_id_flags(brut);
			width = ft_id_width(brut);
			if (flag_char == ('0'))
				ft_memset(buf, 48, (size_t)width)

		
		}
	}

	if (mode == 2)
	{

	}
	if (mode == 3)
	{

	}
	if (mode ==0)
	{

	}
}