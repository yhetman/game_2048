# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yhetman <yhetman@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/03 15:10:32 by yhetman           #+#    #+#              #
#    Updated: 2019/01/13 15:20:09 by anyvchyk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Wextra -Werror

LIBFT_FUNCTIONS = ft_putchar	ft_putendl	ft_putstr		\
				ft_putnbr		ft_strclr 	ft_putnbr_fd	\
				ft_putendl_fd	ft_putchar_fd	ft_putstr_fd	\
				ft_striteri	ft_striter	ft_strequ		\
				ft_strnequ	ft_memdel		ft_memalloc	\
				ft_strdel		ft_strnew		ft_strmap		\
				ft_strmapi	ft_strsub		ft_strtrim	\
				ft_strjoin	ft_strsplit	ft_itoa		\
				ft_strerr		ft_swap		ft_lstsort	\
				ft_range		ft_rgb_to_int	ft_lstnew		\
				ft_lstdelone	ft_lstdel		ft_lstadd		\
				ft_tolower	ft_lstiter	ft_lstmap		\
				ft_atoi		ft_bzero		ft_isalnum	\
				ft_isalpha	ft_isdigit	ft_isprint	\
				ft_isascii	ft_memset		ft_memcpy		\
				ft_memccpy	ft_memmove	ft_memchr		\
				ft_memcmp		ft_strlen		ft_strdup		\
				ft_strcpy		ft_strncpy	ft_strcat		\
				ft_strncat	ft_strlcat	ft_strchr		\
				ft_strrchr	ft_strstr		ft_strnstr	\
				ft_strcmp		ft_strncmp	ft_toupper	\
				ft_display	ft_strrev		ft_strnlen	\
				ft_find_whitespaces			get_next_line	\
				ft_put_uint_base	ft_put_uintmax_base		\
				ft_put_uintmax	ft_putwchar	ft_putwstr\
				ft_wstrlen	ft_wstrncpy	ft_wstrsub	\
				ft_maxlen_base	ft_pow ft_strchri ft_numblength	\
				ft_sqrt
				
OBJ_LIBFT = $(addprefix obj/, $(addsuffix .o, $(LIBFT_FUNCTIONS)))
SRC_LIBFT = $(addprefix src/, $(addsuffix .c, $(LIBFT_FUNCTIONS)))

HEADERS = -I./includes
HEADER_LIBFT = ./includes/libft.h

EOC = \033[0m
GREEN = \e[38;5;132m
RED = \e[38;5;96m
PURPLE = \e[38;5;213m
CYAN = \e[38;5;170m

all: $(NAME)

.PHONY: all clean
.NOTPARALLEL: all $(NAME) clean fclean re 

$(NAME): $(OBJ_LIBFT) $(HEADER_LIBFT)
	@printf " $(RED)>$(EOC) $(GREEN)$(NAME) is ready.$(EOC)\n"
	@ar rcs $(NAME) $(OBJ_LIBFT)
	@ranlib $(NAME)

$(OBJ_LIBFT): obj/%.o: src/%.c $(HEADER_LIBFT)
	@$(CC) -o $@ $(FLAGS) $(HEADERS) -c $<
	@printf "$(CYAN).$(EOC)"

clean:
	@rm -rf $(OBJ_LIBFT)

fclean: clean
	@rm -rf $(NAME)

re: fclean all
