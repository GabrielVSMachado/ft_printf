/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_space_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 19:56:16 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/07/21 04:21:03 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_flag_space(t_conv *param)
{
	char	*tmp;

	tmp = param->str;
	param->str = ft_strjoin(" ", param->str);
	param->len_str += 1;
	free(tmp);
}
