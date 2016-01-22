#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: banthony <banthony@students.42.fr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/23 16:22:07 by banthony          #+#    #+#              #
#    Updated: 2016/01/22 19:01:27 by banthony         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

SRC = ./ft_putchar.c		./ft_putstr.c		./ft_strcpy.c		\
	./ft_strlen.c			./ft_putnbr.c		./ft_atoi.c			\
	./ft_putchar_fd.c		./ft_putnbr_fd.c	./ft_putstr_fd.c	\
	./ft_strcmp.c			./ft_strncmp.c		./ft_strncpy.c		\
	./ft_strnstr.c			./ft_strstr.c		./ft_isalpha.c		\
	./ft_isdigit.c			./ft_isalnum.c		./ft_isascii.c		\
	./ft_isprint.c			./ft_toupper.c		./ft_tolower.c		\
	./ft_putendl.c			./ft_putendl_fd.c	./ft_memset.c		\
	./ft_bzero.c			./ft_strnew.c		./ft_memalloc.c		\
	./ft_memdel.c			./ft_strdup.c		./ft_strdel.c		\
	./ft_strclr.c			./ft_striter.c		./ft_striteri.c		\
	./ft_strmap.c			./ft_strmapi.c		./ft_strequ.c		\
	./ft_strnequ.c			./ft_strsub.c		./ft_strjoin.c		\
	./ft_strtrim.c			./ft_strchr.c		./ft_strrchr.c		\
	./ft_strcat.c			./ft_strncat.c		./ft_memcpy.c		\
	./ft_memccpy.c			./ft_memmove.c		./ft_memchr.c		\
	./ft_memcmp.c			./ft_strlcat.c		./ft_itoa.c			\
	./ft_strsplit.c			./ft_lstnew.c		./ft_lstdelone.c	\
	./ft_lstadd.c			./ft_lstiter.c		./ft_lstdel.c		\
	./ft_lstmap.c			./ft_lstlen.c		./ft_lstlast.c		\
	./ft_newtab.c			./ft_printtab.c		./ft_tabcpy.c		\
	./ft_freetab.c			./ft_lstaddback.c	./ft_open_rdly.c	\
	./ft_close.c			./ft_error.c							\

OBJ= $(SRC:.c=.o)

HEAD = -I ./

FLAG = -Wall -Wextra -Werror

all: $(NAME)

%.o : %.c

$(NAME): $(SRC)
	gcc $(FLAG) $(HEAD) -c $^
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
