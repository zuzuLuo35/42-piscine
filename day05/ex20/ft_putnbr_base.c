/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xluo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 20:37:10 by xluo              #+#    #+#             */
/*   Updated: 2017/08/15 22:41:54 by xluo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		is_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < 32 || base[i] == 127)
			return (0);
		while (base[j] != '\0')
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

long	itol_conv(int nbr)
{
	long	l_nbr;

	l_nbr = (long)nbr;
	if (l_nbr < 0)
		l_nbr *= (-1);
	return (l_nbr);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	int		radix;
	int		result[32];
	long	nbr_l;

	i = 0;
	radix = 0;
	if (is_base(base))
	{
		if (nbr < 0)
			ft_putchar('-');
		nbr_l = itol_conv(nbr);
		while (base[radix] != '\0')
			radix++;
		while (nbr_l > 0)
		{
			result[i] = nbr_l % radix;
			nbr_l = nbr_l / radix;
			i++;
		}
		while ((--i) >= 0)
			ft_putchar(base[result[i]]);
	}
}
