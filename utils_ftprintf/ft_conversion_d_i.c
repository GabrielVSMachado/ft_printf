/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion_d_i.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 18:38:46 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/07/16 17:06:34 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_conversion_d_i(unsigned int	d)
{
	char	*result;

	result = ft_utoa_base(d, "0123456789");
	if (!result)
		return (NULL);
	return (result);
}
