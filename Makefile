NAME = libft.a

CC = gcc

CFLAGS = 
	-Wall 
	-Wextra 
	-Werror 
	-I$(HEADERS)

C_FILES = 

O_FILES = $(C_FILES: .c=.o)

HEADERS = libft.h

all:$(NAME) clean

$(NAME):$(O_FILES)
	ar rcs $@ $^

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(O_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all
