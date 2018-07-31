/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xluo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/26 18:35:20 by xluo              #+#    #+#             */
/*   Updated: 2017/08/27 23:11:36 by xluo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char		*ft_getin(void)
{
	int		ret;
	char	buf[BUF_SIZE + 1];
	char	*out;

	out = (char *)malloc(sizeof(char) * 10000000000);
	while ((ret = read(0, buf, BUF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		out = ft_strcat(out, buf);
	}
	return (out);
}

void		ft_getdim(char *str, int dim[])
{
	int	i;
	int	tmp_colc;

	dim[0] = 0;
	dim[1] = 0;
	i = 0;
	tmp_colc = 0;
	while (str[i] != '\0')
	{
		tmp_colc++;
		if (str[i] == '\n')
		{
			if (dim[0] == 0)
				dim[1] = tmp_colc - 1;
			else if (dim[1] != (tmp_colc - 1))
				return ;
			dim[0]++;
			tmp_colc = 0;
		}
		i++;
	}
}

char		**ft_repatt(char *str, int *dim)
{
	char	**table;
	int		i;
	int		row;
	int		col;

	i = 0;
	table = (char **)malloc(sizeof(char *) * dim[0]);
	while (i++ < dim[0])
		table[i - 1] = (char *)malloc(sizeof(char) * dim[1]);
	i = 0;
	row = 0;
	col = 0;
	while (str[i++] != '\0')
	{
		if (str[i - 1] != '\n')
			table[row][col++] = str[i - 1];
		else
		{
			table[row][col] = '\0';
			row++;
			col = 0;
		}
	}
	return (table);
}

void		ft_prmatch(int i, int *dim, int count)
{
	if (count != 1)
		ft_putstr(" || ");
	ft_putstr("[rush-0");
	ft_putnbr(i);
	ft_putstr("] [");
	ft_putnbr(dim[1]);
	ft_putstr("] [");
	ft_putnbr(dim[0]);
	ft_putstr("]");
}

int			main(void)
{
	char	*rdinput;
	int		dim[2];
	char	**regen;
	int		i;
	int		count;

	rdinput = ft_getin();
	ft_getdim(rdinput, dim);
	regen = ft_repatt(rdinput, dim);
	i = -1;
	count = 0;
	while (++i < 5)
	{
		if (ft_elecmp(regen, dim, g_rs[i]))
		{
			count++;
			ft_prmatch(i, dim, count);
		}
	}
	if (!count)
		ft_putstr("aucune");
	ft_putstr("\n");
	return (0);
}
