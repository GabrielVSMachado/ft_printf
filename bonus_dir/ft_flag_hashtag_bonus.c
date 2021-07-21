/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_hashtag_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 13:25:49 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/07/21 04:18:39 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_flag_hashtag(t_conv *param)
{
	char	*tmp;

	tmp = param->str;
	if (param->conversion == 'x')
		param->str = ft_strjoin("0x", param->str);
	else
		param->str = ft_strjoin("0X", param->str);
	param->len_str += 2;
	free(tmp);
}
