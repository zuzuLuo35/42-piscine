/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xluo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 22:18:35 by xluo              #+#    #+#             */
/*   Updated: 2017/08/10 21:34:45 by xluo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		ft_print_digit(char a, char b, char c, char d)
{
	if (c > a || (c == a && d > b))
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(' ');
		ft_putchar(c);
		ft_putchar(d);
		if (a != '9' || b != '8' || c != '9' || d != '9')
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
	return (0);
}

void	ft_print_comb2(void)
{
	char		a;
	char		b;
	char		c;
	char		d;

	a = '0';
	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			c = '0';
			while (c <= '9')
			{
				d = '0';
				while (d <= '9')
					ft_print_digit(a, b, c, d++);
				++c;
			}
			++b;
		}
		++a;
	}
}
