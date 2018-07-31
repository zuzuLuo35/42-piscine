/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_helpers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xluo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/29 14:45:07 by xluo              #+#    #+#             */
/*   Updated: 2017/08/30 22:33:37 by xluo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_eleisval(char fs[], char c)
{
	if (c != fs[0] && c != fs[1])
		return (0);
	return (1);
}

int		ft_fsisval(char *str, char fs[], int *i, int dim[])
{
	char	*nm;
	int		k;

	while (str[++(*i)] != '\n')
		(dim[2])++;
	if (dim[2] < 4)
		return (0);
	fs[2] = str[--dim[2]];
	fs[1] = str[--dim[2]];
	fs[0] = str[--dim[2]];
	if (fs[0] == fs[1] || fs[1] == fs[2] || fs[0] == fs[2])
		return (0);
	nm = (char *)malloc(sizeof(char) * (dim[2] + 1));
	k = -1;
	while (++k < dim[2])
		nm[k] = str[k];
	nm[++k] = '\0';
	dim[0] = ft_atoi(nm);
	free(nm);
	if (ft_nbrlen(dim[0]) != dim[2] || dim[0] == 0)
		return (0);
	return (1);
}

void	ft_arrini(int ar[], int len, int value)
{
	int	i;

	i = -1;
	while (++i < len)
		ar[i] = value;
}

int		ft_mapchk(char *str, int dim[], char features[])
{
	int	i;
	int	tmp[2];

	i = -1;
	ft_arrini(dim, 3, 0);
	ft_arrini(tmp, 2, 0);
	if (!ft_fsisval(str, features, &i, dim))
		return (0);
	while (str[++i] != '\0')
	{
		(tmp[1])++;
		if (str[i] == '\n')
		{
			if (tmp[0] == 0)
				dim[1] = tmp[1] - 1;
			else if (dim[1] != (tmp[1] - 1))
				return (0);
			(tmp[0])++;
			tmp[1] = 0;
		}
		else if (!ft_eleisval(features, str[i]))
			return (0);
	}
	return ((dim[0] == tmp[0] && dim[1] != 0));
}
