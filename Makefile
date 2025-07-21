NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra  -Werror -I$(HEADERS)

C_FILES = ft_isalpha.c \
		  ft_isanum.c\
		  ft_isprint.c\
		  ft_isascii.c\
		  ft_isalnum.c\
		  ft_strlen.c\
		  ft_ft_bzero.c\
		  ft_memset.c\
		  ft_memcpy.c\
		  ft_memmove.c\


O_FILES = $(C_FILES: .c=.o)

HEADERS = libft.h

all:$(NAME) clean

$(NAME):$(O_FILES)
	ar rcs $@ $^
%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f *.o 
fclean: clean
	rm -f $(NAME)
re: fclean all
