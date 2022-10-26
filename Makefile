# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: revieira <revieira@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/01 18:11:10 by revieira          #+#    #+#              #
#    Updated: 2022/09/27 21:18:34 by coder            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		=	libft.a

INCLUDES 	=	libft.h

SRCS 		= 	ft_atoi ft_isalnum ft_isalpha ft_isascii \
				ft_isdigit ft_isprint ft_tolower ft_toupper \
				ft_strlen ft_strncmp ft_strdup ft_strlcat \
				ft_strlcpy ft_strchr ft_strrchr ft_strnstr \
				ft_bzero ft_calloc ft_memcmp ft_memchr \
				ft_memset ft_memmove ft_memcpy ft_substr \
				ft_strjoin ft_strtrim ft_striteri ft_putchar_fd \
				ft_putstr_fd ft_putendl_fd ft_putnbr_fd ft_itoa \
				ft_split ft_strmapi

BONUS_FILES =	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
				ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
				ft_lstclear.c ft_lstiter.c ft_lstmap.c

BONUS_OBJS =	ft_lstnew.o ft_lstadd_front.o ft_lstsize.o \
				ft_lstlast.o ft_lstadd_back.o ft_lstdelone.o \
				ft_lstclear.o ft_lstiter.o ft_lstmap.o

OBJS = $(addsuffix .o, $(SRCS) )
FILES = $(addsuffix .c, $(SRCS) )
CFLAGS = -Wall -Werror -Wextra

all : $(NAME)

$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)

$(OBJS) : $(FILES)
	cc $(CFLAGS) -I $(INCLUDES) -c $(FILES)

$(BONUS_OBJS) :
	cc $(CFLAGS) -I $(INCLUDES) -c $(BONUS_FILES)
	ar rc $(NAME) $(BONUS_OBJS)

bonus : $(BONUS_OBJS)	

clean : 
	rm -f $(OBJS) $(BONUS_OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all 
