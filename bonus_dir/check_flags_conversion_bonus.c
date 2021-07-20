/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_flags_conversion_bonus.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 13:55:03 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/07/20 15:54:41 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
static int	isconversion(int c);
static void	initializer_struct(t_conv *param);
static int	get_number(char **format_p);

void	check_flags_conversion(t_conv *param, char **format_p)
{
	initializer_struct(param);
	(*format_p)++;
	while (!isconversion(**format_p))
	{
		if (**format_p == '#')
			param->hashtag = TRUE;
		else if (**format_p == ' ')
			param->space = TRUE;
		else if (**format_p == '+')
			param->plus = TRUE;
		else if (**format_p == '0')
			param->zero = TRUE;
		(*format_p)++;
	}
	param->width = get_number(format_p);
	param->conversion = **format_p;
}

static int	isconversion(int c)
{
	if (ft_strchr("cspiudxX%", c))
		return (1);
	return (0);
}

static void	initializer_struct(t_conv *param)
{
	param->conversion = FALSE;
	param->hashtag = FALSE;
	param->space = FALSE;
	param->plus = FALSE;
	param->zero = FALSE;
	param->minus = FALSE;
	param->width = -1;
	param->len_str = 0;
	param->str = NULL;
}

static int	get_number(char **format_p)
{
	char	*tmp;
	int		number;

	tmp = *format_p;
	while (ft_isdigit(*tmp))
		tmp++;
	number = ft_atoi(*format_p);
	*format_p += tmp - *format_p;
	return (number);
}
