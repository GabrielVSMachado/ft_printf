/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion_s.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 18:11:34 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/07/18 22:20:50 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_conversion_s(char *param)
{
	char	*str;

	if (param != NULL)
	{
		str = ft_strdup(param);
		if (!str)
			return (NULL);
		return (str);
	}
	return (ft_strdup("(null)"));
}
