/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 14:38:00 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/05/27 15:09:29 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_calloc(size_t ntype, size_t size)
{
	void	*r;

	r = malloc(ntype * size);
	if (!r)
		return (NULL);
	ft_bzero(r, (ntype * size));
	return (r);
}
