/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 09:07:56 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/05/31 17:15:29 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static int	check(char **s, int num_p);
static char	**alloc_str(char **str, char **p_tmp, int c);
static int	n_pointers(char *s, char c);

char	**ft_split(const char *s, char c)
{
	char	*p_tmp;
	char	**str;
	char	set[2];
	char	*pp;

	if (!s)
		return (NULL);
	set[0] = c;
	set[1] = 0;
	p_tmp = ft_strtrim(s, set);
	if (!p_tmp)
		return (NULL);
	str = (char **)ft_calloc(sizeof(char *), n_pointers(p_tmp, c) + 1);
	pp = p_tmp;
	while (*p_tmp)
	{
		str = alloc_str(str, &p_tmp, c);
		while (*p_tmp == c && c != 0)
			p_tmp++;
	}
	free(pp);
	return (str);
}

static char	**alloc_str(char **str, char **p_tmp, int c)
{
	int			len;
	static int	num_p;

	len = 0;
	while ((p_tmp[0][len]) != c && p_tmp[0][len] != '\0')
		len++;
	if (!str[0])
		num_p = 0;
	*(str + (num_p)) = ft_substr(p_tmp[0], 0, len);
	if (check(str, num_p))
		return (NULL);
	num_p++;
	(p_tmp[0]) += len;
	return (str);
}

static int	n_pointers(char *s, char c)
{
	int	counter;
	int	pointers_to_alloc;

	pointers_to_alloc = 0;
	counter = 0;
	while (s[counter])
	{
		pointers_to_alloc++;
		while (s[counter] != c && s[counter] != '\0')
			counter++;
		while (s[counter] == c && c != 0)
			counter++;
	}
	return (pointers_to_alloc);
}

static int	check(char **s, int num_p)
{
	int	i;

	i = 0;
	if (!*(s + num_p))
	{
		while (i < num_p)
			free(s[i++]);
		s = NULL;
		return (1);
	}
	return (0);
}
