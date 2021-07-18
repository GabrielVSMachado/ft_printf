/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 17:09:13 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/07/18 17:23:33 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	t_conv	conv_handler;
	char	*format_p;

	conv_handler.len = 0;
	format_p = (char *)format;
	while (format_p != NULL)
	{
		if (*format_p == '%')
		{
			conv_handler.conversion = *(++format_p);
			get_conversion(&conv_handler, ap);
			conv_handler.len += ft_strlen(conv_handler.str);
			ft_putstr_fd(conv_handler.str, 1);
			free(conv_handler.str);
			format_p++;
		}
		ft_putchar_fd(*format_p, 1);
		conv_handler.len++;
		format_p++;
	}
	return (conv_handler.len);
}
