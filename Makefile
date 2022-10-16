NAME = libftprintf.a

FILES = ft_printf.c ft_printchr.c

OBJ = $(FILES:.c=.o)

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

all: $(NAME) 

$(NAME): $(OBJ)
	@ar rcs $@ $^
	@echo "Successfully made $(NAME)!"

$(OBJ): $(FILES)
	@gcc $(CFLAGS) -c $(FILES)

clean:
	@$(RM) $(OBJ)
	@echo "Objects removed successfully!"

fclean: clean
	@$(RM) $(NAME)
	@echo "Executable removed successfully!"

re:	fclean all
	@echo "Recompiled $(NAME) successfully!"

.PHONY:	all, clean, fclean, re
