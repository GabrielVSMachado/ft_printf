/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_flags_conversion.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 13:55:03 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/07/19 14:27:31 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
static int	isconversion(int c);

void	check_flags_conversion(t_conv *param, char *format_p)
{
	while (!isconversion(*format_p))
	{
		if (*format_p == '#')
			param->hashtag = TRUE;
		format_p++;
	}
	param->conversion = *format_p;
}

static int	isconversion(int c)
{
	if (ft_strchr("cspiudxX%", c))
		return (1);
	return (0);
}
