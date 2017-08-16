#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: banthony <banthony@students.42.fr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/23 16:22:07 by banthony          #+#    #+#              #
#    Updated: 2017/08/17 01:43:14 by banthony         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

# Fonction revue et ajout de commentaires Libft:
#		./ft_atoi.c
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

SRC =	./ft_atoi.c				\
	./ft_atol.c					\
	./ft_atoll.c				\
	./ft_bzero.c				\
	./ft_close.c				\
	./ft_closedir.c				\
	./ft_exit.c					\
	./ft_freetab.c				\
	./ft_isalnum.c				\
	./ft_isalpha.c				\
	./ft_isascii.c				\
	./ft_isdigit.c				\
	./ft_isprint.c				\
	./ft_itoa_base.c			\
	./ft_itoa.c					\
	./ft_lstaddback.c			\
	./ft_lstadd.c				\
	./ft_lstat.c				\
	./ft_lstdel.c				\
	./ft_lstdelone.c			\
	./ft_lstiter.c				\
	./ft_lstlast.c				\
	./ft_lstlen.c				\
	./ft_lstmap.c				\
	./ft_lstnew.c				\
	./ft_ltoa.c					\
	./ft_memalloc.c				\
	./ft_memccpy.c				\
	./ft_memchr.c				\
	./ft_memcmp.c				\
	./ft_memcpy.c				\
	./ft_memdel.c				\
	./ft_memmove.c				\
	./ft_memset.c				\
	./ft_newmap.c				\
	./ft_newtab.c				\
	./ft_opendir.c				\
	./ft_openfile.c				\
	./ft_print_memory.c			\
	./ft_printtab.c				\
	./ft_putchar_base.c			\
	./ft_putchar.c				\
	./ft_putchar_fd.c			\
	./ft_putendl.c				\
	./ft_putendlcol.c			\
	./ft_putendl_fd.c			\
	./ft_putnbr.c				\
	./ft_putnbrendl.c			\
	./ft_putnbrendl_fd.c		\
	./ft_putnbr_fd.c			\
	./ft_putnbrspace.c			\
	./ft_putnbrspace_fd.c		\
	./ft_putspace.c				\
	./ft_putspace_fd.c			\
	./ft_putstr.c				\
	./ft_putstrcol.c			\
	./ft_putstrcol_fd.c			\
	./ft_putstr_fd.c			\
	./ft_rgbtohexa.c			\
	./ft_strcat.c				\
	./ft_strchr.c				\
	./ft_strclr.c				\
	./ft_strcmp.c				\
	./ft_strcpy.c				\
	./ft_strdel.c				\
	./ft_strdup.c				\
	./ft_strequ.c				\
	./ft_strfill.c				\
	./ft_striter.c				\
	./ft_striteri.c				\
	./ft_strjoin.c				\
	./ft_strjoin_replace.c		\
	./ft_strlcat.c				\
	./ft_strlen.c				\
	./ft_strmap.c				\
	./ft_strmapi.c				\
	./ft_strncat.c				\
	./ft_strncmp.c				\
	./ft_strncpy.c				\
	./ft_strnequ.c				\
	./ft_strnew.c				\
	./ft_strnstr.c				\
	./ft_strrchr.c				\
	./ft_strsplit.c				\
	./ft_strstr.c				\
	./ft_strsub.c				\
	./ft_strtrim2.c				\
	./ft_strtrim.c				\
	./ft_tabadd.c				\
	./ft_tabdup.c				\
	./ft_tablen.c				\
	./ft_tabtolst.c				\
	./ft_tabtrim.c				\
	./ft_tolower.c				\
	./ft_toupper.c				\


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

wevery: $(SRC)
	gcc $(FLAG) -Weverything $(HEAD) -c $^ #-g3 -fsanitize=address
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

cp:		#Copie la libft vers le PATH renseigne dans la var WHERE
	cp $(NAME) $(WHERE)
	cp ./libft.h $(WHERE)
	cp ./get_next_line.h $(WHERE)

fix:	#Compilation personnalise
	norminette $(WHERE)
	gcc $(FLAG) $(HEAD) $(WHERE)

clean:
	rm -f $(OBJ)
	rm -f $(TRASH)

fclean: clean
	rm -f $(NAME)

re: fclean all
