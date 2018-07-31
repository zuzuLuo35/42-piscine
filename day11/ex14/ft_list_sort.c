/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xluo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 19:41:22 by xluo              #+#    #+#             */
/*   Updated: 2017/08/23 20:52:34 by xluo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_swap(t_list *a, t_list *b)
{
	void	*tmp;

	tmp = a->data;
	a->data = b->data;
	b->data = tmp;
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	int		swap;
	t_list	*node;

	node = *begin_list;
	if (!begin_list || node == NULL || node->next == NULL || cmp == NULL)
		return ;
	swap = 1;
	while (swap)
	{
		swap = 0;
		node = *begin_list;
		while (node->next != NULL)
		{
			if ((*cmp)(node->data, node->next->data) > 0)
			{
				ft_list_swap(node, node->next);
				swap = 1;
			}
			node = node->next;
		}
	}
}
