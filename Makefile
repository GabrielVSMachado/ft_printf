.PHONY: all clean fclean re bonus
NAME = libftprintf.a

FUNC_LST = 	ft_conversion_p.c \
			ft_conversion_s.c \
			ft_conversion_c.c \
			ft_conversion_d_i.c \
			ft_conversion_u.c \
			ft_conversion_x.c \
			ft_conversion_upper_x.c \
			get_conversion.c \
			ft_printf.c

FUNC_BONUS_LST = ft_flag_hashtag_bonus.c \
				 ft_flag_space_bonus.c \
				 get_conversion_bonus.c \
				 get_flags_bonus.c \
				 ft_flag_plus_bonus.c \
				 ft_flag_zero.c \
				 check_flags_conversion_bonus.c \
				 ft_printf_bonus.c
LIBFT = ./libft/libft.a
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
CC = clang
SRCDIR = ./utils_ftprintf
BONUSDIR = ./bonus_dir
SRCS_B = $(addprefix $(BONUSDIR)/,$(FUNC_BONUS_LST))
OBJS_B = ${SRCS_B:%.c=%.o}
SRCS = $(addprefix $(SRCDIR)/,$(FUNC_LST))
OBJS = ${SRCS:%.c=%.o}

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	cp $(LIBFT) $(NAME)
	$(AR) $(NAME) $(OBJS)

bonus: $(LIBFT) $(OBJS) $(OBJS_B)
	cp $(LIBFT) $(NAME)
	$(AR) $(NAME) $(OBJS_B) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	$(MAKE) -C ./libft

clean:
	$(RM) $(OBJS) $(OBJS_B)
	$(MAKE) fclean -C ./libft

fclean: clean
	$(RM) $(NAME)

re: fclean all
