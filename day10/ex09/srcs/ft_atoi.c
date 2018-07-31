/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xluo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 11:15:36 by xluo              #+#    #+#             */
/*   Updated: 2017/08/15 09:30:36 by xluo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_whitespace(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	else if (c == '\v' || c == '\f' || c == '\r')
		return (1);
	return (0);
}

int		ft_cnv(char *str, long nbr, int i, int sign)
{
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			nbr = 10 * nbr + (long)(str[i] - '0');
			i++;
		}
		else
			break ;
	}
	nbr *= sign;
	if (nbr > 2147483647 || nbr < -2147483648)
		return (0);
	else
		return ((int)nbr);
}

int		ft_atoi(char *str)
{
	int		i;
	int		sign;
	long	nbr;

	i = 0;
	sign = 1;
	nbr = 0;
	while (ft_is_whitespace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	return (ft_cnv(str, nbr, i, sign));
}
