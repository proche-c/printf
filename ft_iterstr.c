/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proche-c <proche-c@student.42barcelona.com>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 20:31:19 by proche-c          #+#    #+#             */
/*   Updated: 2022/02/03 12:51:00 by proche-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_iterstr(const char *format, t_print *tab)
{
	int			counter;
	t_result	result;

	counter = 0;
	while (*format != '\0')
	{
		if (*format == '%')
		{	
			format++;
			result = ft_get_type_var(tab, format);
			counter = counter + result.length;
			format = format + result.move;
		}
		else
		{
			counter = counter + write(1, &format[0], 1);
			format++;
		}
	}
	return (counter);
}
