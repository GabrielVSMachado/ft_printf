/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion_d_i_u.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 12:08:06 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/07/17 12:09:41 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_conversion_d_i_u(unsigned int u)
{
	char	*result;

	result = ft_utoa_base(u, "0123456789");
	if (!result)
		return (NULL);
	return (result);
}
