SRC = ft_printf.c		\
      ft_puthex.c		\
      ft_putnbr.c		\
      ft_putstr.c		\
      ft_putchar.c		\
      ft_putaddress.c		\
      ft_put_unsigned_nbr.c	\
      ft_strlen.c		\

OBJ = $(SRC:.c=.o)
CFLAGC = -Wall -Werror -Wextra
INCLUDE = ft_printf.h

NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OBJ)

%.o: %.c $(INCLUDE)
	$(CC) $(CFLAGS) -c $< -o $@
	$(AR) -rcs $(NAME) $@

clean:
	rm -rf $(OBJ) $(BOBJ)

fclean: clean
	rm -rf $(NAME) 

re: fclean $(NAME)
