#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft.h"

typedef struct s_conversion
{
	char	conversion;
	char	*str;
	size_t	len;
	size_t	len_str;
	int		precision;
	int		width;
	int		hashtag;
	int		space;
	int		plus;
	int		zero;
	int		minus;
}	t_conv;

int		ft_printf(const char *format, ...);
void	get_conversion(t_conv *param, va_list ap);
void	get_flags(t_conv *param);
void	check_flags_conversion(t_conv *param, char **format);
char	*ft_conversion_p(void *param);
char	*ft_conversion_s(char *param);
char	*ft_conversion_c(int c, t_conv *param);
char	*ft_conversion_d_i(int d);
char	*ft_conversion_u(unsigned int u);
char	*ft_conversion_x(unsigned int x);
char	*ft_conversion_upper_x(unsigned int x);
void	ft_flag_hashtag(t_conv *param);
void	ft_flag_space(t_conv *param);
void	ft_flag_plus(t_conv *param);
void	ft_flag_zero(char c, int width, size_t *len_str, char **str);
void	ft_flag_minus(t_conv *param);
void	ft_precision(t_conv *param);
void	ft_width(t_conv *param);

#endif
