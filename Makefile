# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mklevero <mklevero@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/15 10:11:01 by mklevero          #+#    #+#              #
#    Updated: 2025/04/15 10:11:01 by mklevero         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = function prototypes 

OBJ = $(SRCS:.c=.o)

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $(<:.c=o)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
re:
	fclean $(NAME)

.PHONY: all clean fclean re

Test test 
