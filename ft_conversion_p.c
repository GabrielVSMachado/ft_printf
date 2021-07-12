#include "ft_printf.h"

char	*ft_conversion_p(void *param)
{
	char	*tmp;
	char	*str;

	if (param != NULL)
	{
		tmp = ft_utoa_base((size_t)param, "0123456789abcdef");
		if (!tmp)
			return (NULL);
		str = ft_strjoin("0x", tmp);
		if (!str)
		{
			free(tmp);
			return (NULL);
		}
		free(tmp);
		return (str);
	}
	return (ft_strdup(RETURN_NULL));
}
