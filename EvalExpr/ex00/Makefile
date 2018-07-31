# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xluo <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/26 13:52:29 by xluo              #+#    #+#              #
#    Updated: 2017/08/27 19:48:51 by xluo             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr
SRC = srcs/*.c
DIR_HD = includes/

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror eval_expr.c $(SRC) -o $(NAME) -I $(DIR_HD)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
