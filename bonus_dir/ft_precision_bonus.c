/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_precision_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 18:17:17 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/07/22 22:33:14 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_precision(t_conv *param)
{
	char	*tmp;
	char	c;

	c = param->conversion;
	if ((c == 'd' || c == 'i') && param->str[1] == '-')
		param->len_str--;
	if (c == 's')
	{
		if (param->len_str > (unsigned int)param->precision)
		{
			tmp = param->str;
			param->str = ft_substr(param->str, 0, param->precision);
			free(tmp);
		}
	}
	else
		ft_flag_zero(c, param->precision,
			&(param->len_str), &(param->str));
	param->len_str = ft_strlen(param->str);
}
