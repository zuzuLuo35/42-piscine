# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xluo <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/26 15:31:55 by xluo              #+#    #+#              #
#    Updated: 2017/08/27 20:32:39 by gchesnel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-2
SRC = srcs/*.c
DIR_HD = includes/

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror main.c $(SRC) -o $(NAME) -I $(DIR_HD)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
