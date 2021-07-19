/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 17:09:13 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/07/18 22:08:59 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	t_conv	conv_handler;
	char	*format_p;
	size_t	len;

	conv_handler.len = 0;
	format_p = (char *)format;
	va_start(ap, format);
	while (*format_p != '\0')
	{
		if (*format_p == '%')
		{
			format_p++;
			conv_handler.conversion = *(format_p);
			get_conversion(&conv_handler, ap);
			len = ft_strlen(conv_handler.str);
			conv_handler.len += len;
			write(1, conv_handler.str, len);
			free(conv_handler.str);
			format_p++;
		}
		else
		{
			ft_putchar_fd(*format_p, 1);
			conv_handler.len++;
			format_p++;
		}
	}
	va_end(ap);
	return (conv_handler.len);
}
