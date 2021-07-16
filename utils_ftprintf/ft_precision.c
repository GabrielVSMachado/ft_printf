/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_precision.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 14:51:41 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/07/16 16:28:16 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_precision(t_conv *conv)
{
	char	*tmp;

	tmp = NULL;
	if (conv->conversion == 's')
	{
		if (conv->precision > 0
			&& ft_strlen(conv->str) > (unsigned int)conv->precision)
		{
			tmp = ft_calloc(conv->precision + 1, 1);
			ft_memmove(tmp, conv->str, conv->precision);
			free(conv->str);
			conv->str = tmp;
		}
		else if (conv->precision == 0)
		{
			free(conv->str);
			conv->str = ft_strdup("");
		}
	}
	else
		ft_flag_zero(&(conv->str), conv->precision);
}
