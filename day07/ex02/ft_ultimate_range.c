/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xluo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 10:13:49 by xluo              #+#    #+#             */
/*   Updated: 2017/08/17 23:11:59 by xluo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*rslt;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	rslt = (int*)malloc(sizeof(*rslt) * (max - min));
	i = 0;
	while (i < (max - min))
	{
		rslt[i] = min + i;
		i++;
	}
	*range = rslt;
	return (i);
}
