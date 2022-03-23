/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proche-c <proche-c@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:04:07 by proche-c          #+#    #+#             */
/*   Updated: 2022/02/07 12:43:09 by proche-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_print
{
	va_list	args;
	int		pres;
	int		pres_l;
	int		zero;
	int		minus;
	int		min_long;
	int		min_long_l;
	int		plus;
	int		hexa;
	int		sp;
}	t_print;

typedef struct r_print
{
	int	move;
	int	length;
}	t_result;

int				ft_printf(const char *format, ...);
t_result		ft_get_type_var(t_print *tab, const char *format);
t_result		ft_print_char(t_print *tab);
t_result		ft_print_str(t_print *tab);
t_result		ft_print_int(t_print *tab);
t_result		ft_print_perc(void);
t_result		ft_print_uns(t_print *tab);
void			ft_putuns_fd(unsigned int i, int fd);
t_result		ft_print_hexa(t_print *tab, char c);
int				ft_puthexa_fd(unsigned long long num, int fd);
int				ft_puthexa_up_fd(unsigned long long num, int fd);
t_result		ft_print_punt(t_print *tab);
int				ft_putpunt(unsigned long long num);
t_print			*ft_initialise_tab(t_print *tab);
int				ft_iterstr(const char *format, t_print *tab);
void			ft_putchar_fd(char c, int fd);
void			ft_putnbr_fd(int i, int fd);
void			ft_putstr_fd(char *s, int fd);
size_t			ft_strlen(const char *str);
#endif
