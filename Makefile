
SRCS	= ft_printf.c ft_get_type_var.c ft_print_char.c ft_initialise_tab.c \
		  ft_print_str.c  ft_print_int.c ft_print_perc.c ft_iterstr.c \
		  ft_print_punt.c ft_print_uns.c ft_print_hexa.c ft_puthexa_fd.c \
		  ft_puthexa_up_fd.c ft_putpunt.c ft_putuns_fd.c ft_util_functions.c


OBJS	= ${SRCS:.c=.o}

CFLAGS	=  -Wall -Werror -Wextra

NAME	= libftprintf.a

RM		= rm -f

AR		= ar rc

all:		${NAME}

${NAME}:	${OBJS}
			${AR} ${NAME} ${OBJS}

clean:		
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all