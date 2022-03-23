/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proche-c <proche-c@student.42barcelona.com>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 20:31:19 by proche-c          #+#    #+#             */
/*   Updated: 2022/02/07 12:08:43 by proche-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*ft_rev_char_str(char *punt, int size)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = size - 1;
	while (i <= j)
	{
		if (i != j)
		{
			c = punt[i];
			punt[i] = punt[j];
			punt[j] = c;
		}
		i++;
		j--;
	}
	punt[size] = '\0';
	return (punt);
}

int	ft_puthexa_fd(unsigned long long num, int fd)
{
	int		length;
	char	*base;
	char	punt[235];
	char	*final_punt;

	base = "0123456789abcdef";
	length = 0;
	if (num == 0)
	{
		ft_putchar_fd('0', 1);
		return (1);
	}
	while (num > 0)
	{
		punt[length] = (base[num % 16]);
		num = num / 16;
		length++;
	}
	final_punt = ft_rev_char_str(punt, length);
	ft_putstr_fd(final_punt, fd);
	return (length);
}
