.PHONY: all clean fclean re
NAME = libftprintf.a
SRC = 	ft_flag_minus.c \
		ft_conversion_p.c \
		ft_conversion_s.c
LIBFT = ./libft/libft.a
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
CC = clang
SRCDIR = ./utils_ftprintf
SRCS = $(addprefix $(SRCDIR)/,$(SRC)) 
OBJS = ${SRCS:$(SRCDIR)/%.c=$(SRCDIR)/%.o}
all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	cp $(LIBFT) $(NAME)
	$(AR) $(NAME) $(OBJS)

%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	$(MAKE) -C ./libft

clean:
	$(RM) $(OBJS)
	$(MAKE) fclean -C ./libft

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)
