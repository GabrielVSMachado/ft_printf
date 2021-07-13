/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_minus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 13:53:50 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/07/13 14:52:26 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_flag_minus(char *str, int value)
{
	char	*tmp;
	char	*result;
	int		len_to_implement;

	result = ft_strdup(str);
	if (!result)
		return (NULL);
	len_to_implement = value - ft_strlen(str);
	while (len_to_implement > 0)
	{
		tmp = ft_strjoin(result, " ");
		if (!tmp)
			return (free(result), NULL);
		free(result);
		result = tmp;
		len_to_implement--;
	}
	return (result);
}
