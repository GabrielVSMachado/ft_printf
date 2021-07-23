/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion_c.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 00:27:49 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/07/23 04:21:47 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_conversion_c(int c, t_conv *param)
{
	char	*str;
	int		len;

	len = param->width - 1;
	if (len > 0)
	{
		str = ft_memset(ft_calloc(len + 2, 1), ' ', len + 1);
		if (param->minus == TRUE)
			str[0] = (char)c;
		else
			str[len] = (char)c;
		param->len_str = param->width;
	}
	else
	{
		str = ft_calloc(2, 1);
		str[0] = (char)c;
		param->len_str = 1;
	}
	return (str);
}
