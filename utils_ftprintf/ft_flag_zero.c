/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_zero.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 18:09:25 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/07/15 18:22:44 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_flag_zero(char **param, int width)
{
	char	*tmp;
	int		len;

	len = width - ft_strlen(*param);
	if (len > 0)
	{
		while (len != 0)
		{
			tmp = ft_strjoin("0", *param);
			free(*param);
			*param = tmp;
			len--;
		}
	}
}
