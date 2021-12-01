# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/07 10:47:29 by rjaanit           #+#    #+#              #
#    Updated: 2021/11/15 21:29:57 by rjaanit          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC      = gcc  
CFLAGS  = -Wall -Wextra -Werror
AR      = ar rsc

NAME    = libft.a
HEAD    = libft.h
SRCS    =ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		 ft_memchr.c ft_memcmp.c ft_strlen.c ft_isalpha.c ft_isdigit.c \
		 ft_isalnum.c  ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c \
		 ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c \
		 ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c \
		 ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c  \
		 ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \

OBJS    = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
			$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $? 

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

