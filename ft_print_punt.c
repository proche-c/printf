/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_punt.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proche-c <proche-c@student.42barcelona.com>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 20:31:19 by proche-c          #+#    #+#             */
/*   Updated: 2022/02/03 12:16:12 by proche-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_result	ft_print_punt(t_print *tab)
{
	t_result			result;
	unsigned long long	addr;
	void				*punt;
	int					length;

	punt = va_arg(tab->args, void *);
	if (!punt)
		addr = 0;
	else
		addr = (unsigned long long)punt;
	length = ft_putpunt(addr);
	result.length = length;
	result.move = 1;
	return (result);
}
