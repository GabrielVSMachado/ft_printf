/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion_c.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 00:27:49 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/07/19 13:11:15 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_conversion_c(int c, size_t	*len)
{
	char	*str;

	str = NULL;
	if (c == 0)
	{
		write(1, "\0", 1);
		*len += 1;
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
