/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_hashtag.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 14:24:14 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/07/17 15:04:25 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_flag_hashtag(t_conv *param)
{
	char	*tmp;
	char	*conversion;

	if (param->conversion == 'X')
		conversion = ft_strdup("0X");
	else
		conversion = ft_strdup("0x");
	tmp = ft_strjoin(conversion, param->str);
	free(param->str);
	param->str = tmp;
	free(conversion);
}
