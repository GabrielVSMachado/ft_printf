#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# ifdef __linux__
#  define RETURN_NULL "nill"
# else
#  define RETURN_NULL "0x0"
# endif

# include <stdarg.h>
# include "./libft/libft.h"

typedef struct s_conversion
{
	int		minus;
	int		zero;
	int		hashtag;
	int		space;
	int		plus;
	int		width;
	int		precision;
	int		negative;
	char	conversion;
	char	*str;
}				t_conv;

int		ft_printf(const char *format, ...);
char	*ft_conversion_p(void *param);
char	*ft_conversion_s(char *param);
char	*ft_conversion_c(int c);
char	*ft_conversion_d_i(unsigned int d);
char	*ft_conversion_u(unsigned int u);
char	*ft_conversion_x(unsigned int x);
char	*ft_conversion_X(unsigned int x);
void	ft_flag_minus(char **str, int width);
void	ft_flag_zero(char **str, int width);
void	ft_precision(t_conv *conv);

#endif
