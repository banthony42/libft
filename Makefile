#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: banthony <banthony@students.42.fr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/23 16:22:07 by banthony          #+#    #+#              #
#    Updated: 2018/07/28 19:00:49 by banthony         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

NAME_SANIT = libft_sanit.a

SRC += ./ft_atoi.c
SRC += ./ft_atol.c
SRC += ./ft_atoll.c
SRC += ./ft_bzero.c
SRC += ./ft_close.c
SRC += ./ft_closedir.c
SRC += ./ft_exit.c
SRC += ./ft_freetab.c
SRC += ./ft_isalnum.c
SRC += ./ft_isalpha.c
SRC += ./ft_isascii.c
SRC += ./ft_isdigit.c
SRC += ./ft_isprint.c
SRC += ./ft_itoa_base.c
SRC += ./ft_itoa.c
SRC += ./ft_lstaddback.c
SRC += ./ft_lstadd.c
SRC += ./ft_lstat.c
SRC += ./ft_lstdel.c
SRC += ./ft_lstdelone.c
SRC += ./ft_lstiter.c
SRC += ./ft_lstlast.c
SRC += ./ft_lstlen.c
SRC += ./ft_lstmap.c
SRC += ./ft_lstnew.c
SRC += ./ft_ltoa.c
SRC += ./ft_memalloc.c
SRC += ./ft_memccpy.c
SRC += ./ft_memchr.c
SRC += ./ft_memcmp.c
SRC += ./ft_memcpy.c
SRC += ./ft_memdel.c
SRC += ./ft_memmove.c
SRC += ./ft_memset.c
SRC += ./ft_newmap.c
SRC += ./ft_newtab.c
SRC += ./ft_opendir.c
SRC += ./ft_openfile.c
SRC += ./ft_print_memory.c
SRC += ./ft_print_ptr.c
SRC += ./ft_printtab.c
SRC += ./ft_putchar_base.c
SRC += ./ft_putchar.c
SRC += ./ft_putchar_fd.c
SRC += ./ft_putendl.c
SRC += ./ft_putendlcol.c
SRC += ./ft_putendl_fd.c
SRC += ./ft_putnbr.c
SRC += ./ft_putnbrendl.c
SRC += ./ft_putnbrendl_fd.c
SRC += ./ft_putnbr_fd.c
SRC += ./ft_putnbrspace.c
SRC += ./ft_putnbrspace_fd.c
SRC += ./ft_putspace.c
SRC += ./ft_putspace_fd.c
SRC += ./ft_putstr.c
SRC += ./ft_putstrcol.c
SRC += ./ft_putstrcol_fd.c
SRC += ./ft_putstr_fd.c
SRC += ./ft_rgbtohexa.c
SRC += ./ft_strcat.c
SRC += ./ft_strchr.c
SRC += ./ft_strclr.c
SRC += ./ft_strcmp.c
SRC += ./ft_strcpy.c
SRC += ./ft_strdel.c
SRC += ./ft_strdup.c
SRC += ./ft_strequ.c
SRC += ./ft_strfill.c
SRC += ./ft_striter.c
SRC += ./ft_striteri.c
SRC += ./ft_strjoin.c
SRC += ./ft_strjoin_replace.c
SRC += ./ft_strlcat.c
SRC += ./ft_strlen.c
SRC += ./ft_strmap.c
SRC += ./ft_strmapi.c
SRC += ./ft_strncat.c
SRC += ./ft_strncmp.c
SRC += ./ft_strncpy.c
SRC += ./ft_strnequ.c
SRC += ./ft_strnew.c
SRC += ./ft_strnstr.c
SRC += ./ft_strrchr.c
SRC += ./ft_strsplit.c
SRC += ./ft_strstr.c
SRC += ./ft_strsub.c
SRC += ./ft_strtrim2.c
SRC += ./ft_strtrim.c
SRC += ./ft_tabadd.c
SRC += ./ft_tabdup.c
SRC += ./ft_tablen.c
SRC += ./ft_tabtolst.c
SRC += ./ft_tabtrim.c
SRC += ./ft_tolower.c
SRC += ./ft_toupper.c
SRC += ./get_next_line.c

OBJ= $(SRC:.c=.o)

HEAD = -I ./

ifeq ($(UNAME), Linux)
FLAGS = -Wall -Wextra -Werror -g3
endif

ifeq ($(UNAME), Darwin)
FLAGS = -Wall -Wextra -Werror -Weverything
endif

TRASH += Makefile~
TRASH += ./*.c~
TRASH += ./*.h~

WHERE =

%.o : %.c

all: $(NAME)

sanit:$(NAME_SANIT)

$(NAME): $(SRC)
	@gcc $(FLAG) $(HEAD) -c $^
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

debug: $(SRC)
	gcc $(FLAG) $(HEAD) -c $^ -g3
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

$(NAME_SANIT): $(SRC)
	@gcc $(FLAG) $(HEAD) -c $^ -g3 -fsanitize=address
	@ar rc $(NAME_SANIT) $(OBJ)
	@ranlib $(NAME_SANIT)

cp:		#Copie la libft vers le PATH renseigne dans la var WHERE
	cp $(NAME) $(WHERE)
	cp ./libft.h $(WHERE)
	cp ./get_next_line.h $(WHERE)

fix:	#Compilation personnalise
	norminette $(WHERE)
	gcc $(FLAG) $(HEAD) $(WHERE)

clean:
	@rm -f $(OBJ)
	@rm -f $(TRASH)

fclean: clean
	@rm -f $(NAME) $(NAME_SANIT)

re: fclean all
