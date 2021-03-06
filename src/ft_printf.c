/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 17:09:13 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/07/23 04:16:36 by gvitor-s         ###   ########.fr       */
/*                                                                           */
/* ************************************************************************** */

#include "ft_printf.h"

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
			check_flags_conversion(&conv_handler, (&format_p));
			get_conversion(&conv_handler, ap);
			write(1, conv_handler.str, conv_handler.len_str);
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
