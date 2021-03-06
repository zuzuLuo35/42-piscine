/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xluo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 17:02:18 by xluo              #+#    #+#             */
/*   Updated: 2017/08/27 11:38:27 by xluo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);
int		ft_atoi(char *str);

int		main(int ac, char **av)
{
	int	x;
	int	y;

	if (ac != 3)
		return (1);
	x = ft_atoi(av[1]);
	y = ft_atoi(av[2]);
	rush(x, y);
	return (0);
}
