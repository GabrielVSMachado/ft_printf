/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_zero_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 13:48:16 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/07/20 16:07:11 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_flag_zero(t_conv *param)
{
	char	c;
	size_t	len;
	char	*tmp;

	c = param->conversion;
	len = param->width - param->len_str;
	if (len > 0)
	{
		if ((c == 'i' || c == 'd') && param->str[0] == '-')
		{
			tmp = ft_strdup(&(param->str[1]));
			free(param->str);
			param->str = tmp;
			tmp = ft_calloc(len + param->len_str + 1, 1);
			tmp[0] = '-';
			ft_strlcat(tmp, param->str, len + param->len_str + 1);
		}
		else
		{
			tmp = ft_calloc(len + param->len_str + 1, 1);
			ft_strlcat(tmp, param->str, len + param->len_str + 1);
		}
		param->len_str += len;
	}
}
