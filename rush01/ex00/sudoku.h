/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 17:52:52 by maghayev          #+#    #+#             */
/*   Updated: 2017/08/20 23:18:15 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H
# define N 9
# define UNASSIGNED '.'

int		ft_strlen(char *str);
void	ft_putchar(char str);
void	ft_putstr(char *str);
int		ft_is_num(char c);
int		input_checker(int argc, char **argv);
int		check_predefined_numbers(int argc, char **argv);
char	**s_sudoku_data_prepare(char **data, int c_rows);
int		unassigned_location(char **grid, int *row, int *col);
int		is_safe(char **grid, int row, int col, int num);
int		b_unassigned_location(char **grid, int *row, int *col);
int		b_is_safe(char **grid, int row, int col, int num);
void	sudoku_print(char **grid);
int		sudoku_backward_forward_checker(char **forward, char **backward);
#endif
