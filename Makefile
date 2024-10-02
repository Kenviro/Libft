CC = gcc

CFLAGS = -Wall -Wextra -Werror

FILES = ft_str.c ft_is.c ft_atoi.c ft_bzero.c ft_mem.c ft_strchr.c ft_strl.c ft_to.c

O_FILES = $(FILES:.c=.o)

EXE = libft.a

all: $(EXE)
$(EXE) : $(O_FILES)
	ar rcs $(EXE) $(O_FILES)
	ranlib $(EXE)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o

fclean: clean
	rm -f libft.a

re : fclean all

.PHONY : all clean fclean re