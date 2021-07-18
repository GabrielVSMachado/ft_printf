/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_plus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 15:32:25 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/07/18 13:04:33 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_flag_plus(t_conv	*param)
{
	char	*tmp;

	if (param->negative == 1)
		tmp = ft_strjoin("-", param->str);
	else
		tmp = ft_strjoin("+", param->str);
	free(param->str);
	param->str = tmp;
}
