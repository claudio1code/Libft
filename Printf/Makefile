NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

HEADERS = ft_printf.h

C_FILES = ft_printf.c\
		  ft_utils.c

O_FILES = $(C_FILES:.c=.o)

all:$(NAME)

$(NAME):$(O_FILES)
	ar rcs $@ $^
%.o:%.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -rf $(O_FILES)
fclean:clean
	rm -rf $(NAME)
re: fclean all

.PHONY: all clean fclean re