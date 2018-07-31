/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xluo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/26 14:27:59 by xluo              #+#    #+#             */
/*   Updated: 2017/08/27 22:16:32 by xluo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <stdlib.h>
# define WS(x) (x == ' ' || x == '\t' || x == '\n')

int		ft_putchar(char character);
void	ft_putnbr(int nb);
int		ft_sim_atoi(char **str);
int		f_plmn(char **str);
int		f_tdm(char **str);

#endif
