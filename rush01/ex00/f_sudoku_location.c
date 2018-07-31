/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_sudoku_location.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 01:12:01 by maghayev          #+#    #+#             */
/*   Updated: 2017/08/20 23:15:06 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"
#include <stdio.h>

int		unassigned_location(char **grid, int *row, int *col)
{
	while (*row < 9)
	{
		while (*col < 9)
		{
			if (grid[*row][*col] == UNASSIGNED)
				return (1);
			*col = *col + 1;
		}
		*col = 0;
		*row = *row + 1;
	}
	return (0);
}

int		in_row(char **grid, int row, int num)
{
	int		c_col;

	c_col = 0;
	while (c_col < 9)
	{
		if (grid[row][c_col] == (num + '0'))
			return (1);
		c_col++;
	}
	return (0);
}

int		in_col(char **grid, int col, int num)
{
	int		c_row;

	c_row = 0;
	while (c_row < 9)
	{
		if (grid[c_row][col] == (num + '0'))
			return (1);
		c_row++;
	}
	return (0);
}

int		in_box(char **grid, int box_row, int box_col, int num)
{
	int		c_row;
	int		c_col;

	c_row = 0;
	c_col = 0;
	while (c_row < 3)
	{
		while (c_col < 3)
		{
			if (grid[c_row + box_row][c_col + box_col] == (num + '0'))
				return (1);
			c_col++;
		}
		c_col = 0;
		c_row++;
	}
	return (0);
}

int		is_safe(char **grid, int row, int col, int num)
{
	return (!in_col(grid, col, num) &&
			!in_row(grid, row, num) &&
			!in_box(grid, row - (row % 3), col - (col % 3), num));
}
