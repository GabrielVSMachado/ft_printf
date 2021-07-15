/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion_c.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 00:27:49 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/07/15 00:52:00 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_conversion_c(int c)
{
	char	*str;

	str = ft_calloc(2, 1);
	if (!str)
		return (NULL);
	str[0] = c;
	return (str);
}
