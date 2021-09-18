/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion_X.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 20:02:15 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/07/15 20:04:30 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_conversion_upper_x(unsigned int x)
{
	char	*result;

	result = ft_utoa_base(x, "0123456789ABCDEF");
	if (!result)
		return (NULL);
	return (result);
}
