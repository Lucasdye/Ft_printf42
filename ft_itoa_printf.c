#include "ft_printf_0.H"




char	*ft_itoa_printf(int nb, char *flag)
{
	int		len_nb;
	int		len_buf;
	int		width;
	char	flag_padding;
	char	*buf;

		

	flag_padding = 0;
	len_nb = ft_nbchar(nb);
	width = ft_checkid_width(flag);
	flag_padding = ft_checkid_flag_padding(flag);
	if (len_nb > width)
		buf = malloc((sizeof(char) * len_b) + 2);// +2 = '\0' and sign.
	else 
	{	
		buf = malloc((sizeof(char) * width) + 1);
		ft_memset(buf, ' ', width);
	}
	if (nb < 0)
		buf[0] = '-';
		
	len_buf = (int)ft_strlen(buf);
	if (flag == '+')
	{
			buf[0] = '+';
		if (flag_padding == '0')
			ft_memset(buf + 1, flag_padding, width - len_b);
		if (flag_padding == '-')
			ft_memset((buf + len_nb + 1), ' ', len_buf);
	}
	if (flag_padding == '0')
		ft_memset(buf, flag_padding, width - len_b);
	if (flag_padding == '-')
		ft_memset((buf + len_nb), ' ', len_buf);





}