/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_precision_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 18:17:17 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/07/23 01:20:41 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
static void	negative_handler(t_conv *param);

void	ft_precision(t_conv *param)
{
	char	*tmp;

	if (param->conversion == 's')
	{
		if (param->len_str > (unsigned int)param->precision)
		{
			tmp = param->str;
			param->str = ft_substr(param->str, 0, param->precision);
			free(tmp);
		}
	}
	else if (param->str[0] == '-')
		negative_handler(param);
	else if (param->precision == 0 && *param->str == '0')
	{
		free(param->str);
		param->str = ft_strdup("");
		param->precision = -1;
	}
	else
		ft_flag_zero(param->conversion, param->precision,
			&(param->len_str), &(param->str));
	param->len_str = ft_strlen(param->str);
}

static void	negative_handler(t_conv *param)
{
	char	*tmp;

	param->len_str--;
	tmp = param->str;
	param->str = ft_strdup(&(param->str[1]));
	ft_flag_zero(param->conversion, param->precision,
		&(param->len_str), &(param->str));
	free(tmp);
	tmp = param->str;
	param->str = ft_strjoin("-", param->str);
	free(tmp);
}
