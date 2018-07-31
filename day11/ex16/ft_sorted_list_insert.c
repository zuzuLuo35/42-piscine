/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xluo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 23:25:52 by xluo              #+#    #+#             */
/*   Updated: 2017/08/23 23:38:57 by xluo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	*node;
	t_list	*new;

	new = ft_create_elem(data);
	node = *begin_list;
	if (node == NULL || (*cmp)(data, node->data) < 0)
	{
		*begin_list = new;
		new->next = node;
		return ;
	}
	while (node->next != NULL)
	{
		if ((*cmp)(data, node->data) > 0 && (*cmp)(node->next->data, data) >= 0)
		{
			new->next = node->next;
			node->next = new;
			return ;
		}
		node = node->next;
	}
	node->next = new;
}
