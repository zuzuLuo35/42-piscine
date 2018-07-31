/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_usage.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xluo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 20:33:41 by xluo              #+#    #+#             */
/*   Updated: 2017/08/22 22:38:22 by xluo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"
#include "ft_opp.h"

void	ft_putstr(char *str);

int		ft_usage(int n_ops, int rndm)
{
	char	*operator;
	t_opp	*ops;

	ft_putstr("error : only [ ");
	rndm = 0;
	ops = g_opptab;
	while ((ops - g_opptab) < n_ops)
	{
		operator = ops->op;
		ft_putstr(operator);
		ft_putstr(" ");
		ops++;
	}
	ft_putstr("] are accepted.");
	return (0);
}
