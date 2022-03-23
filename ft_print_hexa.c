/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proche-c <proche-c@student.42barcelona.com>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 20:31:19 by proche-c          #+#    #+#             */
/*   Updated: 2022/02/07 12:16:25 by proche-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_result	ft_print_hexa(t_print *tab, char c)
{
	t_result		result;
	int				length;
	unsigned int	i;

	i = (unsigned long long)va_arg(tab->args, unsigned long long);
	if (c == 'x')
		length = ft_puthexa_fd(i, 1);
	else
		length = ft_puthexa_up_fd(i, 1);
	result.length = length;
	result.move = 1;
	return (result);
}
