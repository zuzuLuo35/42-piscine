/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xluo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 10:38:45 by xluo              #+#    #+#             */
/*   Updated: 2017/08/27 23:05:19 by xluo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <stdlib.h>
# include "patt.h"
# define BUF_SIZE 100

int		ft_putchar(char character);
void	ft_putnbr(int nbr);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
char	*ft_strcat(char *dest, char *str);
int		ft_elecmp(char **tab, int *d, t_patt pat[]);
char	*ft_strcpy(char *dest, char *src);

t_patt	g_rush00[] =
{
	{'o', '-', 'o'},
	{'|', ' ', '|'},
	{'o', '-', 'o'},
};

t_patt	g_rush01[] =
{
	{'/', '*', '\\'},
	{'*', ' ', '*'},
	{'\\', '*', '/'},
};

t_patt	g_rush02[] =
{
	{'A', 'B', 'A'},
	{'B', ' ', 'B'},
	{'C', 'B', 'C'},
};

t_patt	g_rush03[] =
{
	{'A', 'B', 'C'},
	{'B', ' ', 'B'},
	{'A', 'B', 'C'},
};

t_patt	g_rush04[] =
{
	{'A', 'B', 'C'},
	{'B', ' ', 'B'},
	{'C', 'B', 'A'},
};

t_patt	*(g_rs[]) = {g_rush00, g_rush01, g_rush02, g_rush03, g_rush04};

#endif
