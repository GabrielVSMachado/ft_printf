/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_zero_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 13:48:16 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/07/22 22:11:45 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_flag_zero(char conversion, int width, size_t *len_str, char **str)
{
	char	c;
	int		len;
	char	*tmp;

	c = conversion;
	len = width - *len_str;
	if (len > 0)
	{
		if ((c == 'i' || c == 'd') && *str[0] == '-')
		{
			tmp = ft_strdup((*str + 1));
			free(*str);
			*str = tmp;
			tmp = ft_memset(ft_calloc(len + *len_str + 1, 1),
					'0', len + 1);
			tmp[0] = '-';
		}
		else
			tmp = ft_memset(ft_calloc(len + *len_str + 1, 1), '0', len);
		ft_strlcat(tmp, *str, len + *len_str + 1);
		free(*str);
		*str = tmp;
		*len_str += len;
	}
}
