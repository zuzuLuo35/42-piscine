/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/28 22:24:13 by xzeng             #+#    #+#             */
/*   Updated: 2017/08/30 22:37:50 by xluo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putline(char *str, int dim)
{
	int	i;

	i = 0;
	while (i <= dim)
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	change_pat(t_max point, char feature, char *str, int dim[])
{
	int	i;
	int	j;
	int	s;
	int	k;

	s = point.size;
	i = point.x - s + 1;
	k = dim[2] + 4;
	while (i <= point.x)
	{
		j = point.y - s + 1;
		while (j <= point.y)
		{
			str[k + i * (dim[1] + 1) + j] = feature;
			j++;
		}
		i++;
	}
}

void	print_pat(char *str)
{
	t_max	point;
	char	features[4];
	int		dim[3];

	if (!ft_mapchk(str, dim, features))
	{
		ft_putstr("map error\n");
		return ;
	}
	point = maxsqr_fast(str, dim, features);
	change_pat(point, features[2], str, dim);
	ft_putstr(str + dim[2] + 4);
	free(str);
}
