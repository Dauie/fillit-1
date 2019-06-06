# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcouto <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/29 21:19:03 by mcouto            #+#    #+#              #
#    Updated: 2019/05/12 20:52:15 by mcouto           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HEADER = libft.h

CC = gcc

CFLAGS = -Wall -Wextra -Werror -c

SRC_FILES += ft_atoi.c ft_bzero.c ft_howmanydig.c ft_howmanywords.c ft_isalnum.c
SRC_FILES += ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c
SRC_FILES += ft_lstadd.c ft_lstdel.c ft_lstdelone.c ft_lstiter.c
SRC_FILES += ft_lstmap.c ft_lstnew.c ft_makeintarr.c ft_putnbr.c ft_putnbr_fd.c
SRC_FILES += ft_memalloc.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c
SRC_FILES += ft_memdel.c ft_memmove.c ft_memset.c ft_putchar.c ft_putchar_fd.c
SRC_FILES += ft_putendl.c ft_putendl_fd.c ft_strcat.c ft_strchr.c ft_strclr.c
SRC_FILES += ft_strcmp.c ft_strcpy.c ft_strdel.c ft_strdup.c ft_strequ.c
SRC_FILES += ft_striter.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlen.c
SRC_FILES += ft_strmap.c ft_strmapi.c ft_strncat.c ft_strncmp.c ft_strncpy.c
SRC_FILES += ft_strnequ.c ft_strnew.c ft_strnstr.c ft_strrchr.c ft_strsplit.c
SRC_FILES += ft_strstr.c ft_strsub.c ft_strtrim.c ft_table.c ft_tolower.c
SRC_FILES += ft_toupper.c ft_putstr.c ft_putstr_fd.c ft_isblancsp.c

SRC = $(SRC_FILES)

OBJ = $(SRC_FILES:%.c=%.o)

RM = rm -fr

$(NAME):
		$(CC) $(CFLAGS) $(SRC)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

all:$(NAME)

clean:
		$(RM) $(OBJ)

fclean:clean
		$(RM) $(NAME)

re:fclean $(NAME)
