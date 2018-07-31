/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xluo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 21:04:40 by xluo              #+#    #+#             */
/*   Updated: 2017/08/23 23:19:55 by xluo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

int		ft_lenlist(t_list *list)
{
	int		count;
	t_list	*node;

	count = 0;
	node = list;
	while (node != NULL)
	{
		node = node->next;
		count++;
	}
	return (count);
}

void	ft_swele(t_list *a, t_list *b)
{
	void	*tmp;

	tmp = a->data;
	a->data = b->data;
	b->data = tmp;
}

t_list	*ft_at(t_list *begin_list, unsigned int nbr)
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

void	ft_list_reverse_fun(t_list *begin_list)
{
	int		len;
	int		i;

	if (begin_list == NULL)
		return ;
	len = ft_lenlist(begin_list);
	i = 0;
	while (i < (len / 2))
	{
		ft_swele(ft_at(begin_list, i), ft_at(begin_list, len - 1 - i));
		i++;
	}
}
