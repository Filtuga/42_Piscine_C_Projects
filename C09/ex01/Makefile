SRCS = src/ft_putchar.c src/ft_putstr.c src/ft_strlen.c src/ft_strcmp.c src/ft_swap.c
OBJS = ${SRC:.c=.o} 
INCS = includes
NAME = libft.a
LIBC = ar rc
LIBR = ranlib
CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INCS}

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}
	${LIBR} ${NAME}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all
