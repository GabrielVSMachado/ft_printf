/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_conversion_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 16:31:14 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/07/23 03:51:41 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	get_conversion(t_conv *param, va_list ap)
{
	if (param->conversion == 'd' || param->conversion == 'i')
		param->str = ft_conversion_d_i(va_arg(ap, int));
	else if (param->conversion == 'u')
		param->str = ft_conversion_u(va_arg(ap, unsigned int));
	else if (param->conversion == 'x')
		param->str = ft_conversion_x(va_arg(ap, unsigned int));
	else if (param->conversion == 'X')
		param->str = ft_conversion_upper_x(va_arg(ap, unsigned int));
	else if (param->conversion == 's')
		param->str = ft_conversion_s(va_arg(ap, char *));
	else if (param->conversion == 'c')
		param->str = ft_conversion_c(va_arg(ap, int), param);
	else if (param->conversion == 'p')
		param->str = ft_conversion_p(va_arg(ap, void *));
	else if (param->conversion == '%')
		param->str = ft_strdup("%");
	if (param->conversion != 'c')
	{
		param->len_str += ft_strlen(param->str);
		get_flags(param);
	}
	param->len += param->len_str;
}
