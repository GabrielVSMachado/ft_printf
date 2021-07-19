#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define TRUE 1
# define FALSE 0

# include <stdarg.h>
# include "./libft/libft.h"

typedef struct s_conversion
{
	char	conversion;
	char	*str;
	size_t	len;
	int		hashtag;
	int		space;
}				t_conv;

int		ft_printf(const char *format, ...);
void	get_conversion(t_conv *param, va_list ap);
void	get_flags(t_conv *param);
void	check_flags_conversion(t_conv *param, char **format);
char	*ft_conversion_p(void *param);
char	*ft_conversion_s(char *param);
char	*ft_conversion_c(int c, size_t *len);
char	*ft_conversion_d_i(int d);
char	*ft_conversion_u(unsigned int u);
char	*ft_conversion_x(unsigned int x);
char	*ft_conversion_X(unsigned int x);
void	ft_flag_hashtag(t_conv *param);
void	ft_flag_space(t_conv *param);

#endif
