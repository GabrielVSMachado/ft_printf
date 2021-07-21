/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_minus_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 01:58:18 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/07/21 03:20:07 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_flag_minus(t_conv *param)
{
	int		len;
	char	*tmp;

	len = param->width - param->len_str;
	if (len > 0)
	{
		tmp = ft_memset(ft_calloc(len + param->len_str + 1, 1), ' ',
				(len + param->len_str));
		ft_memcpy(tmp, param->str, param->len_str);
		free(param->str);
		param->str = tmp;
		param->len_str += len;
	}
}
