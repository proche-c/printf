/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proche-c <proche-c@student.42barcelona.com>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 20:31:19 by proche-c          #+#    #+#             */
/*   Updated: 2022/02/03 11:45:18 by proche-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_result	ft_print_str(t_print *tab)
{
	t_result	result;
	char		*str;

	str = va_arg(tab->args, char *);
	if (!str)
		str = "(null)";
	result.length = ft_strlen(str);
	result.move = 1;
	ft_putstr_fd(str, 1);
	return (result);
}
