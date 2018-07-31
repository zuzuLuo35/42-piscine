# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xluo <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/24 15:42:18 by xluo              #+#    #+#              #
#    Updated: 2017/08/24 21:59:03 by xluo             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat
SRC = ft_cat.c
HD = ft.h

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror $(SRC) -o $(NAME) -I $(HD)

clean:
	/bin/rm -f ft_*.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
