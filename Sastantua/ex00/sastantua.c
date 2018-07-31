/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xluo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 16:28:14 by xluo              #+#    #+#             */
/*   Updated: 2017/08/13 23:26:15 by xluo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		sc_row(int size)
{
	if (size == 1)
		return (3);
	if (size > 1)
		return (1 + sc_row(size - 1));
	else
		return (0);
}

int		sc_hmx(int sec)
{
	int	hmax;
	int	i_sec;
	int	i_row;
	int sec_row;

	i_sec = 1;
	hmax = 0;
	if (sec <= 0)
		return (0);
	while (i_sec <= sec)
	{
		sec_row = sc_row(i_sec);
		i_row = 1;
		while (i_row <= sec_row)
		{
			hmax++;
			if (i_sec > 1 && i_row == 1)
				hmax += 2;
			i_row++;
		}
		i_sec++;
	}
	return (hmax);
}

int		r_st(int size, int sec, int i, int j)
{
	return (1 + sc_hmx(size) - sc_hmx(sec) + (sc_row(sec) - j));
}

int		r_nd(int size, int sec, int i, int j)
{
	return (1 + sc_hmx(size) + sc_hmx(sec) - (sc_row(sec) - j));
}

int		dr_st(int size)
{
	int dr_wth;

	dr_wth = (size - 1) / 2;
	return (sc_hmx(size) - dr_wth);
}

int		dr_len(int size)
{
	if (size % 2 == 1)
		return (size);
	else
		return (size - 1);
}

int		dr_knob(int size)
{
	int	dr_knobi;

	dr_knobi = sc_hmx(size) + (size - 1) / 2;
	return (dr_knobi);
}

void	print_dr(int size, int i, int j)
{
	int	dr_row;

	dr_row = sc_row(size) - (dr_len(size) - 1) / 2;
	if (i > dr_st(size) && i < (dr_st(size) + 1 + dr_len(size)))
	{
		if (size > 3 && j == dr_row && i == dr_knob(size))
			ft_putchar('$');
		else
			ft_putchar('|');
	}
	else
		ft_putchar('*');
}

void	condition_print(int size, int sec, int i, int j)
{
	if (i < r_st(size, sec, i, j) || i > r_nd(size, sec, i, j))
		ft_putchar(' ');
	else if (i == r_st(size, sec, i, j))
		ft_putchar('/');
	else if (i == r_nd(size, sec, i, j))
		ft_putchar('\\');
	else if ((sec == size) && (j > (sc_row(size) - dr_len(size))))
		print_dr(size, i, j);
	else
		ft_putchar('*');
}

void	sc_print(int sec, int size)
{
	int	i;
	int	j;

	j = 1;
	while (j <= (sc_row(sec)))
	{
		i = 1;
		while (i <= (2 * sc_hmx(size) + 1))
		{
			condition_print(size, sec, i, j);
			if (i == (2 * sc_hmx(size) + 1))
				ft_putchar('\n');
			i++;
		}
		j++;
	}
}

void	sastantua(int size)
{
	int	i;

	i = 1;
	while (i <= size)
	{
		sc_print(i, size);
		i++;
	}
}
