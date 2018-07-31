/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maxsqr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/28 16:46:07 by xzeng             #+#    #+#             */
/*   Updated: 2017/08/30 21:56:06 by xluo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_min(int a, int b, int c)
{
	int	min;

	min = a;
	if (min > b)
		min = b;
	if (min > c)
		min = c;
	return (min);
}

void	new_point(t_max *point)
{
	point->size = 0;
	point->x = 0;
	point->y = 0;
}

int		cal(int good, int *i, int *array, t_max *point)
{
	int	nb;

	if (i[0] == 0 || i[1] == 0)
		nb = (good) ? 1 : 0;
	else
	{
		if (good)
			nb = ft_min(array[i[1]], array[i[1] - 1], i[3]) + 1;
		else
			nb = 0;
	}
	if (nb > point->size)
	{
		point->size = nb;
		point->x = i[0];
		point->y = i[1];
	}
	return (nb);
}

t_max	maxsqr_fast(char *str, int dim[], char features[])
{
	int		*array;
	t_max	point;
	int		i[4];
	int		j;

	array = (int *)malloc(sizeof(int) * dim[1]);
	new_point(&point);
	j = dim[2] + 4;
	i[0] = -1;
	while (++i[0] < dim[0])
	{
		i[1] = -1;
		while (++i[1] < dim[1])
		{
			i[2] = array[i[1]];
			array[i[1]] = cal((str[j] == features[0]),
							i, array, &point);
			i[3] = i[2];
			j++;
		}
		j++;
	}
	free(array);
	return (point);
}
