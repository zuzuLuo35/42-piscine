/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_sudoku_helpers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 21:55:34 by maghayev          #+#    #+#             */
/*   Updated: 2017/08/20 23:19:15 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		input_checker(int argc, char **argv)
{
	int		r_counter;
	int		c_counter;

	r_counter = 0;
	c_counter = 0;
	if (argc != 9)
		return (0);
	while (r_counter < argc)
	{
		if (ft_strlen(argv[r_counter]) != 9)
			return (0);
		while (c_counter < N)
		{
			if (!ft_is_num(argv[r_counter][c_counter]) &&
				argv[r_counter][c_counter] != '.')
				return (0);
			if (!check_predefined_numbers(argc, argv))
				return (0);
			c_counter++;
		}
		c_counter = 0;
		r_counter++;
	}
	return (1);
}

int		check_predefined_numbers(int argc, char **argv)
{
	int		r_counter;
	int		c_counter;
	int		count_nums;

	count_nums = 0;
	r_counter = 0;
	c_counter = 0;
	while (r_counter < argc)
	{
		while (c_counter < N)
		{
			if (ft_is_num(argv[r_counter][c_counter]))
				count_nums++;
			c_counter++;
		}
		c_counter = 0;
		r_counter++;
	}
	if (count_nums < 17)
		return (0);
	return (1);
}

void	sudoku_print(char **grid)
{
	int		row;
	int		col;

	col = 0;
	row = 0;
	while (row < 9)
	{
		while (col < 9)
		{
			ft_putchar(grid[row][col]);
			if (col != 8)
				ft_putchar(' ');
			col++;
		}
		col = 0;
		ft_putstr("\n");
		row++;
	}
}

int		sudoku_backward_forward_checker(char **forward, char **backward)
{
	int		row;
	int		col;

	row = 0;
	col = 0;
	while (row < N)
	{
		while (col < N)
		{
			if (forward[row][col] != backward[row][col])
				return (0);
			col++;
		}
		col = 0;
		row++;
	}
	return (1);
}
