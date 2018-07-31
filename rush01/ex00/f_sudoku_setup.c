/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_sudoku_setup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 02:47:53 by maghayev          #+#    #+#             */
/*   Updated: 2017/08/20 22:36:07 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "sudoku.h"

char	*s_sudoku_row_setup(char *row, int c_rows)
{
	char	*row_point;
	int		counter;

	counter = 0;
	row_point = (char *)malloc((c_rows + 1) * sizeof(*row));
	while (*row)
	{
		row_point[counter] = *row;
		row++;
		counter++;
	}
	row_point[counter] = '\0';
	return (row_point);
}

char	**s_sudoku_data_prepare(char **data, int c_rows)
{
	int		counter;
	char	**grid;

	grid = (char **)malloc(c_rows * sizeof(data));
	counter = 0;
	while (counter < c_rows)
	{
		grid[counter] = s_sudoku_row_setup(data[counter], c_rows);
		counter++;
	}
	return (grid);
}
