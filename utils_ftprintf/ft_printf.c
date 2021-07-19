/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 17:09:13 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/07/18 23:35:01 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	t_conv	conv_handler;
	char	*format_p;

	conv_handler.len = 0;
	format_p = (char *)format;
	va_start(ap, format);
	while (*format_p != '\0')
	{
		if (*format_p == '%')
		{
			conv_handler.conversion = *(++format_p);
			get_conversion(&conv_handler, ap);
			ft_putstr_fd(conv_handler.str, 1);
			free(conv_handler.str);
			format_p++;
		}
		else
		{
			ft_putchar_fd(*format_p, 1);
			format_p++;
			conv_handler.len++;
		}
	}
	return (va_end(ap), conv_handler.len);
}

