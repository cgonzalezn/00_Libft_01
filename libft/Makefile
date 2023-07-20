Library = libft
Compiler = gcc
CmpFlags = -Wall -Wextra -Werror

SRCS = $(wildcard ft_*.c)
OBJS = $(SRCS:.c=.o)

OUTN = $(Library).a
NAME = $(OUTN)

$(OUTN) : $(OBJS) libft.h
	ar -rcs $@ $^

$(OBJS) : $(SRCS) libft.h
	$(Compiler) $(CmpFlags) -c $^

all: $(OUTN)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(OUTN)

re: fclean all

.PHONY: all clean fclean re