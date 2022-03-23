/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_type_var.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proche-c <proche-c@student.42barcelona.com>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 20:31:19 by proche-c          #+#    #+#             */
/*   Updated: 2022/02/07 12:28:56 by proche-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_result	ft_get_type_var(t_print *tab, const char *format)
{
	t_result	result;

	if (format[0] == 'c')
		result = ft_print_char(tab);
	else if (format[0] == 's')
		result = ft_print_str(tab);
	else if (format[0] == 'i' || format[0] == 'd')
		result = ft_print_int(tab);
	else if (format[0] == '%')
		result = ft_print_perc();
	else if (format[0] == 'p')
		result = ft_print_punt(tab);
	else if (format[0] == 'u')
		result = ft_print_uns(tab);
	else if (format[0] == 'x' || format[0] == 'X')
		result = ft_print_hexa(tab, format[0]);
	else
	{
		result.length = 0;
		result.move = 0;
	}
	return (result);
}
