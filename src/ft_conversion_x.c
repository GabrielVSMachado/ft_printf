/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion_x.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 19:41:28 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/07/15 19:42:48 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_conversion_x(unsigned int x)
{
	char	*result;

	result = ft_utoa_base(x, "0123456789abcdef");
	if (!result)
		return (NULL);
	return (result);
}
