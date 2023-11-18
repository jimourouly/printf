# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jroulet <marvin@42lausanne.ch>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/14 08:49:25 by jroulet           #+#    #+#              #
#    Updated: 2023/11/18 19:57:02 by jroulet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


#nom du fichier de sortie apres compilation
NAME = libft.a

#nom du compilateur
CC=gcc

# library a ajouter (ubuntu)
#LIBS = -lbsd

#flags de compilation
CFLAGS= -Wall -Wextra -Werror

MAIN = main.c

#fichiers sources
SRCS = ft_isascii.c\
	   ft_isdigit.c\
	   ft_isalpha.c\
	   ft_isalnum.c\
	   ft_isprint.c\
	   ft_memset.c\
	   ft_strlen.c\
	   ft_bzero.c\
	   ft_memcpy.c\
	   ft_memmove.c\
	   ft_strlcpy.c\
	   ft_strlcat.c\
	   ft_toupper.c\
	   ft_tolower.c\
	   ft_strchr.c\
	   ft_strrchr.c\
	   ft_strncmp.c\
	   ft_memchr.c\
	   ft_memcmp.c\
	   ft_strnstr.c\
	   ft_atoi.c\
	   ft_calloc.c\
	   ft_strdup.c\
	   ft_substr.c\
	   ft_strjoin.c\
	   ft_strtrim.c\
	   ft_split.c \
	   ft_itoa.c \
	   ft_strmapi.c \
	   ft_striteri.c \
	   ft_putchar_fd.c \
	   ft_putstr_fd.c \
	   ft_putendl_fd.c \
	   ft_putnbr_fd.c\

BSRCS = ft_lstnew.c\
		ft_lstadd_front.c\
		ft_lstsize.c\
		ft_lstlast.c\
		ft_lstadd_back.c\
		ft_lstdelone.c\
		ft_lstclear.c\
		ft_lstiter.c\
		ft_lstmap.c



OBJS = $(SRCS:%.c=%.o)

BOBJS = $(BSRCS:%.c=%.o)

RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus: $(BOBJS) $(OBJS)
	ar rcs $(NAME) $(OBJS) $(BOBJS)

#compile : all 
#	$(CC) $(CFLAGS) $(MAIN) $(NAME) $(OBJS) #$(LIBS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

#Pour executer le clean, make clean
clean:
	$(RM) $(OBJS) $(BOBJS)

#Full Clean
fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
