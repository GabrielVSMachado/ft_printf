.PHONY: all clean fclean re bonus
NAME = libftprintf.a

FUNC_LST = ft_flag_hashtag.c \
				 ft_flag_space.c \
				 get_conversion.c \
				 get_flags.c \
				 ft_flag_plus.c \
				 ft_flag_zero.c \
				 ft_flag_minus.c \
				 ft_precision.c \
				 ft_width.c \
				 check_flags_conversion.c \
				 ft_printf.c \
				 ft_conversion_c.c \
				 ft_conversion_d_i.c \
				 ft_conversion_p.c \
				 ft_conversion_s.c \
				 ft_conversion_x.c \
				 ft_conversion_u.c \
				 ft_conversion_upper_x.c

LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a
HEADERS = -I$(LIBFT_DIR) -I.
CFLAGS = -Wall -Wextra -Werror -O3
AR = ar rcs
CC = gcc
RM := rm -rf
SRCDIR = ./src
OBJ_DIR = obj
SRCS = $(addprefix $(SRCDIR)/,$(FUNC_LST))
OBJS = ${SRCS:$(SRCDIR)/%.c=$(OBJ_DIR)/%.o}

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	@cp $(LIBFT) $(NAME)
	$(AR) $(NAME) $(OBJS)

$(OBJ_DIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) $(HEADERS) -c $< -o $@

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

clean:
	$(RM) $(OBJ_DIR)
	$(MAKE) fclean -C $(LIBFT_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all
