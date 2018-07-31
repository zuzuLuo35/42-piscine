/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xluo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 16:20:31 by xluo              #+#    #+#             */
/*   Updated: 2017/08/21 19:45:31 by xluo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int	*rslt;
	int	i;

	i = 0;
	rslt = (int*)malloc(sizeof(*rslt) * (length + 1));
	while (i < length)
	{
		rslt[i] = f(tab[i]);
		i++;
	}
	return (rslt);
}
