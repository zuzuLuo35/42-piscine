/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xluo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 10:04:09 by xluo              #+#    #+#             */
/*   Updated: 2017/08/10 23:39:02 by xluo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return(0);
}

void ft_next(int n)
{
	char	a;

	a = '0';
	while (a < '7')
	{
		int i=1;
		ft_putchar(a);
		if ((n--) > 1)
		{
			ft_next(n);
		}
		++a;
	}
	ft_putchar('0' + nb % 10);
}

void ft_print_combn(int n)
{
	int	i=0;
	int num_digit=10;
	int	max;;
	while ((n--)>1)
	{
		num_digit *= 10;
	}
	max = num_digit -1;
	while(i<=max)
	{
		ft_putnbr(i);
		if(i!=max)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		i++;
	}
}

int main(void)
{
	ft_print_combn(2);
	return(0);
}
