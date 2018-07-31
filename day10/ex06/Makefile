# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xluo <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/21 20:48:32 by xluo              #+#    #+#              #
#    Updated: 2017/08/22 11:37:51 by xluo             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
SRC = srcs/ft_*.c
DIR_HD = includes

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror do_op.c $(SRC) -o $(NAME) -I $(DIR_HD)

clean:
	/bin/rm -f ft_*.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
