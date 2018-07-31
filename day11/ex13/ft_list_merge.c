/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xluo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 19:30:23 by xluo              #+#    #+#             */
/*   Updated: 2017/08/23 20:54:31 by xluo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*node;

	node = *begin_list1;
	if (node == NULL || begin_list1 == NULL)
		*begin_list1 = begin_list2;
	else
	{
		while (node->next != NULL)
			node = node->next;
		node->next = begin_list2;
	}
}
