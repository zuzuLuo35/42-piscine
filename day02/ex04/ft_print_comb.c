/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xluo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 20:08:28 by xluo              #+#    #+#             */
/*   Updated: 2017/08/10 18:48:53 by xluo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		ft_print_digit(char a, char b, char c)
{
	if (c > b)
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(c);
		if (a != '7' || b != '8' || c != '9')
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
	return (0);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a;
		while (b <= '8')
		{
			if (b > a)
			{
				c = b;
				while (c <= '9')
					ft_print_digit(a, b, c++);
			}
			++b;
		}
		++a;
	}
}
