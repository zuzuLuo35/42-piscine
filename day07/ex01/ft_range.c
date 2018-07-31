/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xluo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 22:41:08 by xluo              #+#    #+#             */
/*   Updated: 2017/08/17 22:46:53 by xluo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	*rslt;
	int	i;

	if (min >= max)
		return (0);
	rslt = (int*)malloc(sizeof(*rslt) * (max - min));
	i = 0;
	while (i < (max - min))
	{
		rslt[i] = min + i;
		i++;
	}
	return (rslt);
}
