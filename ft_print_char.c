/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proche-c <proche-c@student.42barcelona.com>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 20:31:19 by proche-c          #+#    #+#             */
/*   Updated: 2022/02/03 10:44:58 by proche-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_result	ft_print_char(t_print *tab)
{
	t_result	result;
	char		c;

	result.length = 1;
	result.move = 1;
	c = (char)va_arg(tab->args, int);
	ft_putchar_fd(c, 1);
	return (result);
}
