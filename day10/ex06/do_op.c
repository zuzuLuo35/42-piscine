/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xluo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 22:18:59 by xluo              #+#    #+#             */
/*   Updated: 2017/08/22 11:54:15 by xluo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int		is_valid_scnd(char operation, int scnd)
{
	if (scnd == 0)
	{
		if (operation == '/')
		{
			ft_putstr("Stop : division by zero\n");
			return (0);
		}
		if (operation == '%')
		{
			ft_putstr("Stop : modulo by zero\n");
			return (0);
		}
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int		i;
	char	*ops;

	ops = "+-*/%\0";
	if (argc != 4)
		return (0);
	if (!is_valid_scnd(argv[2][0], ft_atoi(argv[3])))
		return (0);
	i = 0;
	while (ops[i] != '\0')
	{
		if (argv[2][0] == ops[i])
		{
			ft_putnbr(g_ops[i](ft_atoi(argv[1]), ft_atoi(argv[3])));
			ft_putchar('\n');
			return (0);
		}
		i++;
	}
	ft_putstr("0\n");
	return (0);
}
