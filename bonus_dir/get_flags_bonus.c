/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_flags_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 13:37:00 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/07/22 19:13:39 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	get_flags(t_conv *param)
{
	char	c;

	c = param->conversion;
	if (param->hashtag == TRUE && (c == 'x' || c == 'X')
		&& ft_strncmp(param->str, "0", 1))
		ft_flag_hashtag(param);
	if (param->space == TRUE && (c == 'i' || c == 'd')
		&& ft_atoi(param->str) >= 0 && param->plus == FALSE)
		ft_flag_space(param);
	if (param->plus == TRUE && (c == 'd' || c == 'i')
		&& ft_atoi(param->str) >= 0)
		ft_flag_plus(param);
	if ((c != 's' && c != 'c' && c != '%') && param->zero == TRUE
		&& param->minus == FALSE)
		ft_flag_zero(param->conversion, param->width,
			&(param->len_str), &(param->str));
	if (param->minus == TRUE)
		ft_flag_minus(param);
}
