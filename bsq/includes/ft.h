/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xluo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/28 11:04:09 by xluo              #+#    #+#             */
/*   Updated: 2017/08/30 22:01:11 by xluo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# define BUF_SIZE 4096

typedef struct	s_max
{
	int	size;
	int	x;
	int	y;
}				t_max;

int				ft_putchar(char c);
void			ft_putstr(char *str);
char			*ft_strcpy_allo(char *dest, char *src);
char			*ft_strcat(char *dest, char *str);
int				ft_eleisval(char fs[], char c);
int				ft_fsisval(char *str, char fs[], int *i, int dim[]);
void			ft_arrini(int ar[], int len, int value);
int				ft_mapchk(char *str, int dim[], char features[]);
void			print_pat(char *str);
t_max			maxsqr_fast(char *str, int dim[], char features[]);
int				ft_nbrlen(int nbr);
int				ft_atoi(char *str);

#endif
