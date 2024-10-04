CC = gcc

CFLAGS = -Wall -Wextra -Werror

FILES = ft_atoi.c ft_str.c ft_bzero.c ft_is.c ft_mem.c ft_put.c ft_str_f.c ft_strchr.c \
ft_strl.c ft_strtim.c ft_to.c ft_split.c ft_substr.c

O_FILES = $(FILES:.c=.o)

C_BONUS = ft_lst_bonus1.c ft_lst_bonus2.c

O_BONUS = $(C_BONUS:.c=.o)

HEADERS = libft.h

NAME = libft.a

all: $(NAME)
$(NAME) : $(O_FILES)
	ar rcs $(NAME) $(O_FILES)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o

fclean: clean
	rm -f libft.a

re : fclean all

bonus : $(NAME)
$(NAME) : $(O_BONUS) $(O_FILES)
	ar rcs $(NAME) $(O_BONUS) $(O_FILES)

.PHONY : all clean fclean re