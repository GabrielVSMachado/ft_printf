/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_minus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 13:53:50 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/07/14 22:11:22 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_flag_minus(char **str, int value)
{
	char	*tmp;
	int		len_to_implement;

	len_to_implement = value - ft_strlen(*str);
	while (len_to_implement > 0)
	{
		tmp = ft_strjoin(*str, " ");
		free(*str);
		*str = tmp;
		len_to_implement--;
	}
}
