/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xluo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 15:05:22 by xluo              #+#    #+#             */
/*   Updated: 2017/08/12 19:22:50 by xluo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		if ((nb % i) == 0)
		{
			if (i == nb)
				return (1);
			if (i != nb)
				return (0);
		}
		i++;
	}
	return (0);
}

int		ft_find_next_prime(int nb)
{
	int	i;

	i = nb;
	while (!ft_is_prime(i))
		i++;
	return (i);
}
