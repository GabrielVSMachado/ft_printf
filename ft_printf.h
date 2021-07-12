#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# ifdef __linux__
#  define RETURN_NULL "nill"
# else
#  define RETURN_NULL "0x0"
# endif

#include "./libft/libft.h"

int		ft_printf(const char *format, ...);
char	*ft_conversion_p(void *param);

#endif
