.PHONY: all clean fclean re bonus
NAME = libftprintf.a

FUNC_LST =	get_conversion.c \
			ft_printf.c

FUNC_BONUS_LST = ft_flag_hashtag_bonus.c \
				 ft_flag_space_bonus.c \
				 get_conversion_bonus.c \
				 get_flags_bonus.c \
				 ft_flag_plus_bonus.c \
				 ft_flag_zero_bonus.c \
				 check_flags_conversion_bonus.c \
				 ft_printf_bonus.c

FUNC_COMUM_LST = ft_conversion_c.c \
				 ft_conversion_d_i.c \
				 ft_conversion_p.c \
				 ft_conversion_s.c \
				 ft_conversion_u.c \
				 ft_conversion_upper_x.c

LIBFT = ./libft/libft.a
CFLAGS = -g -Wall -Wextra -Werror
AR = ar rcs
CC = clang
SRCDIR = ./utils_ftprintf
BONUSDIR = ./bonus_dir
SRCS_B = $(addprefix $(BONUSDIR)/,$(FUNC_BONUS_LST))
OBJS_B = ${SRCS_B:%.c=%.o}
SRCS_C = $(addprefix $(SRCDIR)/,$(FUNC_COMUM_LST))
OBJS_C = ${SRCS_C:%.c=%.o}
SRCS_M = $(addprefix $(SRCDIR)/,$(FUNC_LST))
OBJS_M = ${SRCS_M:%.c=%.o}

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS_C) $(OBJS_M)
	cp $(LIBFT) $(NAME)
	$(AR) $(NAME) $(OBJS_M) $(OBJS_C)

bonus: $(LIBFT) $(OBJS_C) $(OBJS_B)
	cp $(LIBFT) $(NAME)
	$(AR) $(NAME) $(OBJS_B) $(OBJS_C)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	$(MAKE) -C ./libft

clean:
	$(RM) $(OBJS_C) $(OBJS_B) $(OBJS_M)
	$(MAKE) fclean -C ./libft

fclean: clean
	$(RM) $(NAME)

re: fclean all
