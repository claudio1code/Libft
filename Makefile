NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra  -Werror -g3

C_FILES = ft_isalpha.c\
		  ft_isalnum.c\
		  ft_isprint.c\
		  ft_isascii.c\
		  ft_isalnum.c\
		  ft_strlen.c\
		  ft_bzero.c\
		  ft_memcpy.c\
		  ft_memmove.c\
		  ft_memset.c\
		  ft_strlcpy.c\
		  ft_toupper.c\
		  ft_isdigit.c\
		  ft_tolower.c\
		  ft_strchr.c\
		  ft_strrchr.c\
		  ft_strncmp.c\
		  ft_memchr.c\
		  ft_memcmp.c\
		  ft_strnstr.c


O_FILES = $(C_FILES:%.c=%.o)

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
