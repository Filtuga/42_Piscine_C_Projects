SRCS	=  ./ft_do_op.c
OBJS	= ${SRCS:.c=.o}
NAME	= do-op
NAME2	= a.out
CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror

${NAME} :
	${CC} ${CFLAGS} ${SRCS} -o ${NAME}

all : ${NAME}

clean :
	${RM} ${NAME}
 
fclean : clean
	${RM} ${NAME} ${NAME2}

re : fclean all

.PHONY: all clean fclean re .c.o
