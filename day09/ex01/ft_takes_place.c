/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xluo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 19:28:42 by xluo              #+#    #+#             */
/*   Updated: 2017/08/17 20:30:31 by xluo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_printhour(int hour)
{
	int	printnum;

	if ((hour / 12) % 2 == 0)
	{
		if (hour % 12 == 0)
			printnum = 12;
		else
			printnum = hour % 12;
		printf("%d.00 A.M.", printnum);
	}
	else
	{
		if (hour % 12 == 0)
			printnum = 12;
		else
			printnum = hour % 12;
		printf("%d.00 P.M.", printnum);
	}
}

void	ft_takes_place(int hour)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	ft_printhour(hour);
	printf(" AND ");
	ft_printhour(hour + 1);
	printf("\n");
}
