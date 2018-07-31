/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 16:19:15 by jolee             #+#    #+#             */
/*   Updated: 2017/08/13 16:34:30 by jolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_condition_print(int i, int j, int x, int y)
{
	if ((i == 1 && j == 1) || (i == x && j == 1))
		ft_putchar('A');
	else if ((i == 1 && j == y) || (i == x && j == y))
		ft_putchar('C');
	else if (i == x || i == 1 || j == y || j == 1)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	j = 0;
	while ((++j) <= y)
	{
		i = 0;
		while ((++i) <= x)
		{
			ft_condition_print(i, j, x, y);
			if (i == x)
				ft_putchar('\n');
		}
	}
}
