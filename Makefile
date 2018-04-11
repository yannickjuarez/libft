# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ydumont- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 16:00:46 by ydumont-          #+#    #+#              #
#    Updated: 2017/11/20 19:20:04 by ydumont-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			= gcc
NAME		= libft.a
FLAGS		= -Wall -Wextra -Werror

HEAD		= libft.h

SRC_NAME	= ft_atoi.c \
			  ft_isalnum.c \
			  ft_isalpha.c \
			  ft_isdigit.c \
			  ft_islower.c  \
			  ft_isprint.c \
			  ft_isupper.c \
			  ft_iswhite.c \
			  ft_tolower.c \
			  ft_toupper.c \
			  ft_strlen.c \
			  ft_strcat.c \
			  ft_strlcat.c \
			  ft_strchr.c \
			  ft_strdup.c \
			  ft_strncat.c \
			  ft_strcpy.c \
			  ft_strncmp.c \
			  ft_strcmp.c \
			  ft_strncpy.c \
			  ft_strstr.c \
			  ft_strnstr.c \
			  ft_strrchr.c \
			  ft_memcmp.c \
			  ft_memchr.c \
			  ft_memmove.c \
			  ft_memcpy.c \
			  ft_memset.c \
			  ft_bzero.c \
			  ft_memccpy.c \
			  ft_memalloc.c \
			  ft_isascii.c \
			  ft_itoa.c \
			  ft_lstadd.c \
			  ft_lstdel.c \
			  ft_lstdelone.c \
			  ft_lstiter.c \
			  ft_lstmap.c \
			  ft_lstnew.c \
			  ft_putchar.c \
			  ft_putstr.c \
			  ft_putchar_fd.c \
			  ft_putendl.c \
			  ft_putendl_fd.c \
			  ft_putnbr.c \
			  ft_putnbr_fd.c \
			  ft_putstr_fd.c \
			  ft_strclr.c \
			  ft_strdel.c \
			  ft_strequ.c \
			  ft_striter.c \
			  ft_striteri.c \
			  ft_strjoin.c \
			  ft_strmap.c \
			  ft_strmapi.c \
			  ft_strnequ.c \
			  ft_strnew.c \
			  ft_strsplit.c \
			  ft_strsub.c \
			  ft_strtrim.c \
			  ft_memdel.c \
			  ft_exit.c

OBJ_NAME	= $(SRC_NAME:.c=.o)

SRC			= $(addprefix $(SRC_PATH),$(SRC_NAME))
OBJ			= $(addprefix $(OBJ_PATH),$(OBJ_NAME))


all: $(NAME) $(HEAD) 

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	$(CC) $(FLAGS) -o $@ -c $<

clean:
	rm -fv $(OBJ)

fclean: clean
	rm -fv $(NAME)

re: fclean all

norme:
	norminette $(SRC)

.NOT_PARALLEL: $(NAME)
