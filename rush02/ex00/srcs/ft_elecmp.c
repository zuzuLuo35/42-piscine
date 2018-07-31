/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_elecmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xluo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 15:37:56 by xluo              #+#    #+#             */
/*   Updated: 2017/08/28 15:45:58 by xluo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "patt.h"

int		ft_corcmp(char **tab, int *d, t_patt pat[])
{
	if (tab[0][0] != pat[0].st)
		return (0);
	if (d[0] > 1 && d[0] > 1)
	{
		if (tab[0][d[1] - 1] != pat[0].ed)
			return (0);
		if (tab[d[0] - 1][0] != pat[2].st)
			return (0);
		if (tab[d[0] - 1][d[1] - 1] != pat[2].ed)
			return (0);
	}
	return (1);
}

int		ft_borcmp(char **tab, int *d, t_patt pat[])
{
	int	i;

	i = 0;
	while (++i < (d[1] - 1))
	{
		if (tab[0][i] != pat[0].md || tab[d[0] - 1][i] != pat[2].md)
			return (0);
	}
	i = 0;
	while (++i < (d[0] - 1))
	{
		if (tab[i][0] != pat[1].st || tab[i][d[1] - 1] != pat[1].ed)
			return (0);
	}
	return (1);
}

int		ft_elecmp(char **tab, int *d, t_patt pat[])
{
	int	i;
	int j;

	if (!ft_corcmp(tab, d, pat))
		return (0);
	if (!ft_borcmp(tab, d, pat))
		return (0);
	i = 0;
	while (++i < (d[0] - 1))
	{
		j = 0;
		while (++j < (d[1] - 1))
		{
			if (tab[i][j] != pat[1].md)
				return (0);
		}
	}
	return (1);
}
