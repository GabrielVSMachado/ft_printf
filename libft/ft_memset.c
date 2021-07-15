/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 18:38:56 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/05/18 18:38:58 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memset(void *s, int c, size_t n)
{
	int	counter_s;

	counter_s = 0;
	while ((int)n > counter_s)
	{
		((char *)s)[counter_s] = (char)c;
		counter_s++;
	}
	return (s);
}
