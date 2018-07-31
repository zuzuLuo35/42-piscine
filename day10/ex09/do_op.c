/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xluo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 22:18:59 by xluo              #+#    #+#             */
/*   Updated: 2017/08/22 22:31:55 by xluo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"
#include "ft_opp.h"

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
	int		n_ops;
	t_opp	*ops;

	ops = g_opptab;
	n_ops = 0;
	if (ops)
		n_ops = sizeof(g_opptab) / sizeof(*g_opptab);
	if (argc != 4)
		return (0);
	if (!is_valid_scnd(argv[2][0], ft_atoi(argv[3])))
		return (0);
	while ((ops - g_opptab) < n_ops)
	{
		if (argv[2][0] == (ops->op)[0])
		{
			ft_putnbr((ops->fptr)(ft_atoi(argv[1]), ft_atoi(argv[3])));
			ft_putchar('\n');
			return (0);
		}
		ops++;
	}
	ft_usage(n_ops, 0);
	return (0);
}
