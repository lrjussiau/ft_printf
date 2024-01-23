NAME = libftprintf.a
LIBFTNAME = libft.a
CC = @gcc
CFLAGS = -Wall -Werror -Wextra
LIBFTDIR = ./libft

SRCS = 	ft_printf.c \
			print_hex.c\
			print_nb.c\
			print_str.c\
			print_ptr.c\

OBJS = $(SRCS:.c=.o)

all: $(NAME)

makelibft:
	@make -C $(LIBFTDIR)
	@cp $(LIBFTDIR)/$(LIBFTNAME) .
	@mv $(LIBFTNAME) $(NAME)

$(NAME): makelibft $(OBJS)
	@ar -rcs $(NAME) $(OBJS)

clean:
	@rm -f $(OBJS)
	@cd $(LIBFTDIR) && make clean
	
fclean: clean
	@rm -f $(NAME)
	@cd $(LIBFTDIR) && make fclean
	
re: fclean all

.PHONY: all clean fclean re