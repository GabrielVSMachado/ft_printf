/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_plus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 23:14:41 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/07/19 23:23:36 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_flag_plus(t_conv *param)
{
	char	*tmp;

	tmp = param->str;
	param->str = ft_strjoin("+", param->str);
	free(tmp);
}
