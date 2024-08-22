SRCS = ft_printf.c\
ft_printhex.c\
ft_printnumb.c\
ft_putchar.c\
ft_printunsigned.c\
ft_printp.c

AR =  ar rcs
CC = cc
RM = rm -f
FLAGS  = -Wall -Wextra -Werror
NAME = libftprintf.a
OBJS = $(SRCS:.c=.o)

.c.o:
	$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re