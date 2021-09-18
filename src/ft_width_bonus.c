/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_width_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 00:31:57 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/07/23 01:03:35 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_width(t_conv *param)
{
	char	*tmp;
	int		len;

	len = param->width - param->len_str;
	if (len > 0)
	{
		tmp = ft_memset(ft_calloc(len + param->len_str + 1, 1), ' ', len);
		ft_strlcat(tmp, param->str, len + param->len_str + 1);
		free(param->str);
		param->str = tmp;
		param->len_str += len;
	}
}
