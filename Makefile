#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: banthony <banthony@students.42.fr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/23 16:22:07 by banthony          #+#    #+#              #
#    Updated: 2016/09/07 20:32:17 by banthony         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

#22SRC =	./ft_atoi.c
#		./ft_atol.c
#		./ft_atoll.c
#		./ft_bzero.c
#		./ft_close.c
#		./ft_closedir.c
#		./ft_exit.c
#		./ft_freetab.c
#		./ft_isalnum.c
#		./ft_isalpha.c
#		./ft_isascii.c
#		./ft_isdigit.c
#		./ft_isprint.c
#		./ft_itoa.c
#		./ft_ltoa.c
#		./ft_lltoa.c
SRC =./ft_atoi.c			./ft_atol.c				./ft_atoll.c			\
	./ft_bzero.c			./ft_close.c			./ft_closedir.c			\
	./ft_opendir.c 			./ft_lstat.c									\
	./ft_putchar.c			./ft_putstr.c			./ft_strcpy.c			\
	./ft_strlen.c			./ft_putnbr.c									\
	./ft_putchar_fd.c		./ft_putnbr_fd.c		./ft_putstr_fd.c		\
	./ft_strcmp.c			./ft_strncmp.c			./ft_strncpy.c			\
	./ft_strnstr.c			./ft_strstr.c			./ft_isalpha.c			\
	./ft_isdigit.c			./ft_isalnum.c			./ft_isascii.c			\
	./ft_isprint.c			./ft_toupper.c			./ft_tolower.c			\
	./ft_putendl.c			./ft_putendl_fd.c		./ft_memset.c			\
	./ft_strnew.c			./ft_memalloc.c			./ft_putnbrspace.c		\
	./ft_memdel.c			./ft_strdup.c			./ft_strdel.c			\
	./ft_strclr.c			./ft_striter.c			./ft_striteri.c			\
	./ft_strmap.c			./ft_strmapi.c			./ft_strequ.c			\
	./ft_strnequ.c			./ft_strsub.c			./ft_strjoin.c			\
	./ft_strtrim.c			./ft_strchr.c			./ft_strrchr.c			\
	./ft_strcat.c			./ft_strncat.c			./ft_memcpy.c			\
	./ft_memccpy.c			./ft_memmove.c			./ft_memchr.c			\
	./ft_memcmp.c			./ft_strlcat.c			./ft_itoa.c				\
	./ft_strsplit.c			./ft_lstnew.c			./ft_lstdelone.c		\
	./ft_lstadd.c			./ft_lstiter.c			./ft_lstdel.c			\
	./ft_lstmap.c			./ft_lstlen.c			./ft_lstlast.c			\
	./ft_newtab.c			./ft_printtab.c			./ft_tabdup.c			\
	./ft_freetab.c			./ft_lstaddback.c		./ft_open_rdly.c		\
	./ft_exit.c				./get_next_line.c		./ft_putnbrspace_fd.c	\
	./ft_strtrim2.c			./ft_newmap.c			./ft_putspace.c			\
	./ft_putspace_fd.c		./ft_putnbrendl.c		./ft_putnbrendl_fd.c	\
	./ft_tablen.c	\

OBJ= $(SRC:.c=.o)

HEAD = -I ./

FLAG = -Wall -Wextra -Werror

TRASH = Makefile~	\
		./*.c~		\
		./*.h~		\

WHERE =

all: $(NAME)

%.o : %.c

$(NAME): $(SRC)
	gcc $(FLAG) $(HEAD) -c $^
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

debug: $(SRC)
	gcc $(FLAG) $(HEAD) -c $^ -g
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

cp:
	cp $(NAME) $(WHERE)
	cp ./libft.h $(WHERE)
	cp ./get_next_line.h $(WHERE)

clean:
	rm -f $(OBJ)
	rm -f $(TRASH)

fclean: clean
	rm -f $(NAME)

re: fclean all
