# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tguiter <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/01/04 16:41:21 by tguiter           #+#    #+#              #
#    Updated: 2015/01/06 17:47:26 by tguiter          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_atoi.c \
	  ft_bzero.c \
	  ft_isalnum.c \
	  ft_isalpha.c \
	  ft_isascii.c \
	  ft_isdigit.c \
	  ft_isprint.c \
	  ft_memalloc.c \
	  ft_memccpy.c \
	  ft_memcpy.c \
	  ft_memset.c \
	  ft_putchar.c \
	  ft_putendl.c \
	  ft_putnbr.c \
	  ft_putstr.c \
	  ft_strcat.c \
	  ft_strdup.c \
	  ft_strlen.c \
	  ft_strncat.c \
	  ft_tolower.c \
	  ft_toupper.c \
	  ft_strchr.c \
	  ft_strstr.c \
	  ft_memcmp.c \
	  ft_strrchr.c \
	  ft_strnstr.c \
	  ft_strcpy.c \
	  ft_memdel.c \
	  ft_strnew.c \
	  ft_strclr.c \
	  ft_striter.c \
	  ft_striteri.c \
	  ft_strmap.c \
	  ft_strmapi.c \
	  ft_strcmp.c \
	  ft_strncmp.c \
	  ft_strncpy.c \
	  ft_memchr.c \
	  ft_memmove.c \
	  ft_strequ.c \
	  ft_strnequ.c \
	  ft_strsub.c \
	  ft_strsplit.c\
	  ft_strjoin.c \
	  ft_strtrim.c \
	  ft_isblank.c \
	  ft_strlcat.c \
	  ft_putchar_fd.c \
	  ft_putstr_fd.c \
	  ft_putendl_fd.c \
	  ft_putnbr_fd.c \
	  ft_itoa.c \
	  ft_islower.c\
	  ft_isupper.c\
	  ft_lstadd.c\
	  ft_lstdel.c\
	  ft_lstdelone.c\
	  ft_lstiter.c\
	  ft_lstnew.c\
	  ft_lstmap.c\
	  ft_lstpushback.c\
	  ft_strnjoin.c\
	  get_next_line.c\
	  ft_strdel.c

OBJ = $(SRC:.c=.o)

CFLAGS += -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
		@echo "\033[33;1m"
		@echo -n '---> Creating the Libft... <---'
		@echo "\033[0m"
		@echo "\033[31;1m"
		@echo -n '---> Compilation in progress NOW... <---'
		@echo "\033[0m"
		@gcc -c $(CFLAGS) $(SRC)
		ar -rc $(NAME) $(OBJ)
		@echo "\033[1;32m"
		@echo -n '---> Compilation DONE ! <---'
		@echo "\033[0m"

clean:
		@rm -f *.o
		@echo "\033[1;34m"
		@echo -n '---> Rule clean OK ! <---'
		@echo "\033[0m"

fclean: clean
		@rm -f $(NAME)
		@echo "\033[1;34m"
		@echo -n '---> Rule fclean OK ! <---'
		@echo "\033[0m"

re: fclean all
		@echo "\033[1;34m"
		@echo -n '---> Rule re OK ! <---'
		@echo "\033[0m"
