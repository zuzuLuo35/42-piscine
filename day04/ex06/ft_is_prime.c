/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xluo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 11:34:11 by xluo              #+#    #+#             */
/*   Updated: 2017/08/12 19:22:21 by xluo             ###   ########.fr       */
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
