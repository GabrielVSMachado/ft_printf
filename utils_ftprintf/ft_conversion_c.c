/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion_c.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 00:27:49 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/07/23 03:16:59 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_conversion_c(int c, t_conv *param)
{
	char	*str;

	if (c == 0)
	{
		write(1, "\0", 1);
		param->len_str += 1;
		return (ft_strdup(""));
	}
	else
	{
		str = ft_calloc(2, sizeof(char));
		if (!str)
			return (NULL);
		str[0] = (char)c;
	}
	return (str);
}
