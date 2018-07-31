/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 21:17:10 by maghayev          #+#    #+#             */
/*   Updated: 2017/08/15 21:17:40 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_num(char c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

int		ft_str_is_numeric(char *str)
{
	int		index;

	index = 0;
	if (*str == '\0')
		return (1);
	while (*(str + index) != '\0')
	{
		if (!ft_is_num(*(str + index)))
			return (0);
		index++;
	}
	return (1);
}
