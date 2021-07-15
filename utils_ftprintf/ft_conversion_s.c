/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion_s.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 18:11:34 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/07/14 22:11:28 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_conversion_s(char *param)
{
	char	*str;

	str = ft_strdup(param);
	if (!str)
		return (NULL);
	return (str);
}
