/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 16:18:29 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/05/28 15:58:25 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	counter;
	size_t	len_alloc;
	size_t	len_s;

	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if (len_s < (size_t)start)
		len_alloc = 1;
	else if (len_s - (size_t)start > len)
		len_alloc = len;
	else
		len_alloc = len_s - (size_t)start;
	substr = (char *)malloc(sizeof(char) * (len_alloc + 1));
	if (substr == NULL)
		return (NULL);
	counter = 0;
	while (counter < len && (len_s > (size_t)start))
	{
		substr[counter] = s[start + counter];
		counter++;
	}
	substr[counter] = '\0';
	return (substr);
}
