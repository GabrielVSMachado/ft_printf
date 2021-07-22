/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_precision_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 18:17:17 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/07/22 18:58:01 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_precision(t_conv *param)
{
	char	*tmp;

	if (param->conversion == 's')
	{
		if (param->len_str > param->precision)
		{
			tmp = param->str;
			param->str = ft_substr(param->str, 0, param->precision);
			free(tmp);
		}
	}
	else
		ft_flag_zero(param->conversion, param->precision,
			&(param->len_str), &(param->str));
	param->len_str = ft_strlen(param->str);
}
