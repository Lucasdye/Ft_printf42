#ifndef FT_PRINTF_0_H
# define FT_PRINTF_0_H
# ifndef GREEN
#  define GREEN "\033[0;32m" 
# endif
# ifndef RESET_COLOR
#  define RESET_COLOR "\x1b[0m"
# endif
# ifndef YELLOW
#  define YELLOW "\033[0;33m"
# endif
# ifndef RED
#  define RED "\033[0;31m"
# endif

# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf_0_0(char *format, ...);
int		ft_printf_main_0(int ac, char **av);

int		*ft_printf(char *format, ...);
int		ft_putchar(char a);
void	ft_putformat(char *str);
void	ft_putstr(char *str);
int		ft_char_cmp(char src, char cmp);
size_t	ft_strlen(const char *s);
size_t	ft_strlen_tab(const char **tab);
size_t	ft_strlen_break(const char *s, char *stop);
int		ft_strlen_p_brut(const char *str);
int		ft_strlen_arg(int n);
void	ft_clean(char **tab);
char	*ft_strdup(const char *source);
char	*ft_strdup_bytes_free(char *source, int n);
int		ft_atoi(const char *str);
int		ft_atoi_printf(int nb, const char *flag);
char	*ft_itoa(int n);
int		ft_nbchar(int n);

int		ft_count_args(char *format);
char	*ft_checkid_conv_spec(char *str);
char	*ft_checkid_flags(char *str);
int		ft_checkid_width(char *brut);
#endif