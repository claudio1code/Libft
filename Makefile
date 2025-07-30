NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra  -Werror -g3

C_FILES = ft_isalpha.c\
		  ft_isalnum.c\
		  ft_isprint.c\
		  ft_isascii.c\
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
		  ft_strnstr.c\
		  ft_atoi.c\
		  ft_strlcat.c\
		  ft_calloc.c\
		  ft_strdup.c\
		  ft_substr.c\
		  ft_strjoin.c\
		  ft_strtrim.c\
		  ft_split.c\
		  ft_itoa.c\
		  ft_strmapi.c\
		  ft_striteri.c\
		  ft_putchar_fd.c\
		  ft_putstr_fd.c\
		  ft_putendl_fd.c\
		  ft_putnbr_fd.c

C_BONUS = 	ft_lstnew_bonus.c\
			ft_lstadd_front_bonus.c\
			ft_lstsize_bonus.c\
			ft_lstlast_bonus.c\
			ft_lstadd_back_bonus.c

O_FILES = $(C_FILES:.c=.o)
O_BONUS = $(C_BONUS:.c=.o)

all:$(NAME)

$(NAME):$(O_FILES)
	ar rcs $@ $^
%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@
bonus:$(NAME) $(O_BONUS)
	ar rcs $(NAME) $(O_BONUS)
clean:
	rm -f $(O_FILES) $(O_BONUS)
fclean: clean
	rm -f $(NAME) 
re: fclean all
