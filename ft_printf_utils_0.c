#include "ft_printf_0.h"

//OUTPUT
int		ft_putchar(char a)
{
		return (write(1, &a, 1));
}
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return ;
	while (str[i])
		write(1, &str[i++], 1);
	return ;
}
void		ft_putformat(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '\\' && str[i + 1] == '\\')
		{	
			write(1, "\\", 1);
			i++;
			i++;
		}
		write(1, &str[i], 1);
		i++;
	}
	return ;
}

//CONVERSIONS
char		*ft_itoa(int n)
{
	char	*res;
	int		i;
	int		end;
	long	nb;

	end = 0;
	nb = n;
	i = ft_nbchar(nb);
	res = malloc(sizeof(char) * (i + 1));
	if (!res)
		return (0);
	if (nb < 0)
	{
		res[0] = '-';
		nb = -nb;
		end = 1;
	}
	res[i] = '\0';
	while (i-- > end)
	{
		res[i] = nb % 10 + 48;
		nb = nb / 10;
	}
	return (res);
}

int			ft_atoi(const char *str)
{
	int	i;
	int	n;
	int	sign;

	i = 0;
	n = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{	
		if (str[i] == '-')
			sign = sign * (-1);
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{		
		n = n * 10 + (str[i] - 48);
		i++;
	}
	return (n * sign);
}
//DATA 

	//LEN
size_t		ft_strlen(const char *s)
{	
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	
	return (i);
}

size_t		ft_strlen_break(const char *s, char *stop)
{	
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if(s[i] == *stop)
			break ;
		i++;
	}
	
	return (i);
}

int			ft_strlen_p_brut(const char *str)
{
	char	*conv_spec;
	int		i;
	int		j;

	i = 0;
	j = 0;
	conv_spec = ft_strdup("diuxXcsp");
	while (str[i])
	{
		while (conv_spec[j] != '\0')
		{
			if (str[i] == conv_spec[j])
				return(i);
			j++;
		}
		j = 0;
		i++;
	}
	return (-1);
}

size_t		ft_strlen_tab(const char **tab)
{	
	size_t	i;

	i = 0;
	if (!tab)
		return (0);
	while (tab[i])
		i++;
	return (i);
}

int			t_nbchar(int n)
{
	int	nb;

	nb = 0;
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		nb = 1;
		n = -n;
	}
	while (n / 10 > 0)
	{
		nb++;
		n = n / 10;
	}
	nb++;
	return (nb);
}

int			ft_strlen_arg(int n)
{
	size_t	size;
	
	size = ft_strlen(ft_itoa(n));
	return (size);


}
	//COUNT
int			ft_count_args(char *str)
{
	int		i;
	int		two_modulos_in_a_row;
	int		count;

	i = 0;
	two_modulos_in_a_row = 0;
	count = 0;
	if (!str)
		return 0;
	while (str[i])
	{
		if (str[i] == '%')
		{	
			count++;
			two_modulos_in_a_row++;
			if (two_modulos_in_a_row == 2)
				count -= 2;
		}
		if (i % 2 == 0)
			two_modulos_in_a_row = 0;	
		i++;
	}
	return (count);
}

	//ID
char		ft_conv_identifier(char *str)
{
	char	*conv_spec;
	int		i;
	int 	j;

	conv_spec = ft_strdup("diuxXcsp%%");
	i  = 0;
	j = 0;
	while (str[i])
	{
		while (conv_spec[j] != '\0')
		{
			if (str[i] == conv_spec[j])
				return(str[i]);
			j++;
		}
		j = 0;
		i++;
	}
	return (free(conv_spec), NULL);
}
char 		*ft_checkid_flags(char *str)
{
	char	*flags;
	int		i;
	int		j;

	flags = strdup("0_.#");
	i  = 0;
	j = 0;
	while (str[i])
	{
			while (str[i] != flags[j])
			{
				if (str[i] == flags[j])
					return (free(flags), &str[i]);
			}
		i++;
	}

	return (free(flags), NULL);
}
char 		*ft_checkid_flags_padding(char *str)
{
	char	*flags;
	int		i;
	int		j;

	flags = strdup("0-");
	i  = 0;
	j = 0;
	while (str[i])
	{
			while (str[i] != flags[j])
			{
				if (str[i] == flags[j])
					return (free(flags), &str[i]);
			}
		i++;
	}

	return (free(flags), NULL);
}

int			ft_checkid_width(char *brut)
{
	int i;
	char width[11];

	i = 0;
	if (brut[0] == '0')
		brut++;	
	while (brut[i] >= '0' && brut[i] <= '9' && i < 10)
	{
		width[i] = brut[i];
		i++;
	}
	width[i] = '\0';
	if (width[i] == '\0')
		return (0);
	return (ft_atoi(width));
}

/*char **Adress_Book_conversions(char *str,char target)
{
	
	char	**pos;
	int		i;
	int		count_targets;
	int		va_sizeof = sizeof(char *) ;

	i = 0;
	while (str[i])
	{
		if (str[i] == target)
		{
			count_targets++;
			i++;
			if (str[i + 1] == '%')
				i++;
		}
		i++;
	}
	pos = malloc((sizeof(char *) * count_targets) + sizeof(char *));
	if (!pos || sizeof(tab) == va_sizeof)
	{	
		ft_clean(pos);
		return (NULL);
	}
	*pos[count_targets] = '\0';
	
	i = 0;
	while (str[i])
	{
		if (str[i] == target)
		{	
			*pos = &str[i];
			pos++;
			i++;
			if (str[i + 1] == '%')
					i++;
		}
		i++;
	}
	retun (pos);
}
*/
//CREATE / MODIF
char		*ft_strdup_bytes_free(char *source, int n)
{
	char	*dest;
	int	i;

	i = 0;
	dest = malloc(ft_strlen(source) + 1);
	if (!dest || !source)
		return (NULL);
	while (source[i] && i < n)
	{
		dest[i] = source[i];
		i++;
	}
	free(source);
	return (dest);
}

char		*ft_strdup(const char *source)
{
	char	*dest;
	int	i;

	i = 0;
	dest = malloc(ft_strlen(source) + 1);
	if (!dest || !source)
		return (NULL);
	while (source[i])
	{
		dest[i] = source[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
void		*ft_memset(void *ptr, int c, size_t n)
{	
	size_t	i;

	i = 0;
	while (i < n)
		((char *)ptr)[i++] = (char)c;
	return (ptr);
}

//DIVERS

void		ft_clean(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return ;
}



