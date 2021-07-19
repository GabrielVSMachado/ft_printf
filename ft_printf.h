#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "./libft/libft.h"

typedef struct s_conversion
{
	char	conversion;
	char	*str;
	size_t	len;
}				t_conv;

int		ft_printf(const char *format, ...);
void	get_conversion(t_conv *param, va_list ap);
char	*ft_conversion_p(void *param);
char	*ft_conversion_s(char *param);
char	*ft_conversion_c(int c, size_t *len);
char	*ft_conversion_d_i(int d);
char	*ft_conversion_u(unsigned int u);
char	*ft_conversion_x(unsigned int x);
char	*ft_conversion_X(unsigned int x);

#endif
