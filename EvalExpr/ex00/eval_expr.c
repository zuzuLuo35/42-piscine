/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xluo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/26 14:17:33 by xluo              #+#    #+#             */
/*   Updated: 2017/08/27 22:21:19 by xluo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		f_parenthesis(char **str)
{
	int	out;

	while (WS(**str))
		(*str)++;
	if (**str == '(')
	{
		(*str)++;
		out = f_plmn(str);
		if (**str == ')')
			(*str)++;
		return (out);
	}
	return (ft_sim_atoi(str));
}

int		f_tdm(char **str)
{
	int		out;
	char	opr;

	out = f_parenthesis(str);
	while (**str)
	{
		while (WS(**str))
			(*str)++;
		opr = **str;
		if (opr == '*' || opr == '/' || opr == '%')
		{
			(*str)++;
			if (opr == '*')
				out *= f_parenthesis(str);
			else if (opr == '/')
				out /= f_parenthesis(str);
			else if (opr == '%')
				out %= f_parenthesis(str);
		}
		else
			return (out);
	}
	return (out);
}

int		f_plmn(char **str)
{
	int		out;
	char	opr;

	out = f_tdm(str);
	while (**str)
	{
		while (WS(**str))
			(*str)++;
		opr = **str;
		if (opr == '+' || opr == '-')
		{
			(*str)++;
			if (opr == '+')
				out += f_tdm(str);
			else if (opr == '-')
				out -= f_tdm(str);
		}
		else
			return (out);
	}
	return (out);
}

int		eval_expr(char *str)
{
	return (f_plmn(&str));
}

int		main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
}
