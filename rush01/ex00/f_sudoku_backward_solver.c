/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_sudoku_backward_solver.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 22:33:25 by maghayev          #+#    #+#             */
/*   Updated: 2017/08/20 23:15:24 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		b_unassigned_location(char **grid, int *row, int *col)
{
	while (*row >= 0)
	{
		while (*col >= 0)
		{
			if (grid[*row][*col] == UNASSIGNED)
				return (1);
			*col = *col - 1;
		}
		*col = 8;
		*row = *row - 1;
	}
	return (0);
}
