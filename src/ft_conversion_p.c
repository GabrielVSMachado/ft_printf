/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion_p.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 22:11:52 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/07/18 22:21:16 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_conversion_p(void *param)
{
	char	*tmp;
	char	*str;

	if (param != NULL)
	{
		tmp = ft_utoa_base((size_t)param, "0123456789abcdef");
		if (!tmp)
			return (NULL);
		str = ft_strjoin("0x", tmp);
		if (!str)
		{
			free(tmp);
			return (NULL);
		}
		free(tmp);
		return (str);
	}
	return (ft_strdup("0x0"));
}
