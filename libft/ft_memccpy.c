/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 13:49:17 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/05/26 19:31:36 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 
void	*ft_memccpy(void *restrict dst, const void *restrict src,
		int c, size_t n)
{
	while (n)
	{
		*((unsigned char *)dst) = *((unsigned char *)src);
		if (*((unsigned char *)src) == (unsigned char)c)
		{
			dst++;
			src++;
			return (dst);
		}
		dst++;
		src++;
		n--;
	}
	return (NULL);
}
