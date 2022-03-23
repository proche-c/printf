/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uns.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proche-c <proche-c@student.42barcelona.com>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 20:31:19 by proche-c          #+#    #+#             */
/*   Updated: 2022/02/07 11:56:14 by proche-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_get_length_int(unsigned int i)
{
	int		length;
	long	nbr;

	nbr = (long)i;
	length = 0;
	if (nbr == 0)
		length = 1;
	if (nbr < 0)
	{
		length++;
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		length++;
		nbr = nbr / 10;
	}
	return (length);
}

t_result	ft_print_uns(t_print *tab)
{
	t_result		result;
	int				length;
	unsigned int	i;

	i = va_arg(tab->args, unsigned int);
	ft_putuns_fd(i, 1);
	length = ft_get_length_int(i);
	result.length = length;
	result.move = 1;
	return (result);
}
