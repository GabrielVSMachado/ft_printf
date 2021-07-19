/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_flags.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 13:37:00 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/07/19 13:42:32 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	get_flags(t_conv *param)
{
	char	c;

	c = param->conversion;
	if (param->hashtag == TRUE && (c == 'x' || c == 'X'))
		ft_flag_hashtag(param);
}
