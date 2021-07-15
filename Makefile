.PHONY: all clean fclean re
NAME = libftprintf.a

FUNC_LST = 	ft_conversion_p.c \
			ft_conversion_s.c \
			ft_conversion_c.c \
			ft_conversion_d_i.c \
			ft_conversion_u.c \
			ft_conversion_x.c \
			ft_flag_minus.c \
			ft_flag_zero.c


LIBFT = ./libft/libft.a
CFLAGS = -g -Wall -Wextra -Werror
AR = ar rcs
CC = clang
SRCDIR = ./utils_ftprintf
SRCS = $(addprefix $(SRCDIR)/,$(FUNC_LST)) 
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
