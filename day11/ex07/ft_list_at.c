/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xluo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 18:00:40 by xluo              #+#    #+#             */
/*   Updated: 2017/08/23 20:43:15 by xluo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	count;
	t_list			*target;

	count = 0;
	if (begin_list == NULL)
		return (NULL);
	target = begin_list;
	while (count < nbr)
	{
		if (target->next == NULL)
			return (NULL);
		else
			target = target->next;
		count++;
	}
	return (target);
}
