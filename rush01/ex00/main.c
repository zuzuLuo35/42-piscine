/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 05:59:24 by maghayev          #+#    #+#             */
/*   Updated: 2017/08/20 23:19:03 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"
#include <stdlib.h>

int		sudoku_main(char **grid)
{
	int		row;
	int		col;
	int		counter;

	row = 0;
	col = 0;
	counter = 0;
	if (unassigned_location(grid, &row, &col) == 0)
		return (1);
	counter = 1;
	while (counter <= 9)
	{
		if (is_safe(grid, row, col, counter) == 1)
		{
			grid[row][col] = counter + '0';
			if (sudoku_main(grid))
				return (1);
			grid[row][col] = UNASSIGNED;
		}
		counter++;
	}
	return (0);
}

int		sudoku_main_backwards(char **grid)
{
	int		row;
	int		col;
	int		counter;

	row = 8;
	col = 8;
	counter = 1;
	if (b_unassigned_location(grid, &row, &col) == 0)
		return (1);
	counter = 1;
	while (counter <= 9)
	{
		if (is_safe(grid, row, col, counter) == 1)
		{
			grid[row][col] = counter + '0';
			if (sudoku_main_backwards(grid))
				return (1);
			grid[row][col] = UNASSIGNED;
		}
		counter++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	char	**sudoku_forward;
	char	**sudoku_backward;

	argv++;
	argc--;
	if (!input_checker(argc, argv))
	{
		ft_putstr("Error\n");
		return (0);
	}
	sudoku_forward = s_sudoku_data_prepare(argv, argc);
	sudoku_backward = s_sudoku_data_prepare(argv, argc);
	if (sudoku_main(sudoku_forward) == 1 &&
			sudoku_main_backwards(sudoku_backward) == 1)
	{
		if (sudoku_backward_forward_checker(sudoku_forward, sudoku_backward))
		{
			sudoku_print(sudoku_forward);
		}
		else
			ft_putstr("Error\n");
	}
	else
		ft_putstr("Error\n");
	return (0);
}
