# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iboiraza <iboiraza@student.42urduliz.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/13 12:58:47 by iboiraza          #+#    #+#              #
#    Updated: 2024/03/20 15:47:45 by iboiraza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC       = cc
HEADERS_DIR = .
CFLAGS   = -Wall -Wextra -Werror 
NAME     = libft.a
RM       = rm -rf

CFILES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_toupper.c ft_memset.c ft_bzero.c ft_strrchr.c ft_strncmp.c\
	ft_tolower.c ft_strchr.c ft_strnstr.c ft_strlcpy.c ft_strlcat.c\
	ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_atoi.c\
	ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c\
	ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
	ft_putendl_fd.c ft_putnbr_fd.c 

OFILES = $(CFILES:.c=.o)

CBONUSS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
	ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
	ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

OBONUSS = $(CBONUSS:.c=.o)

all: $(NAME)

$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES)

bonus: $(OBONUSS)
	ar rcs $(NAME) $(OBONUSS)

clean:
	$(RM) $(OFILES) $(OBONUSS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME) bonus

.PHONY: all clean fclean re
