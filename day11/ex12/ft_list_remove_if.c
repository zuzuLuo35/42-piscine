/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xluo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 17:40:34 by xluo              #+#    #+#             */
/*   Updated: 2017/08/23 20:44:29 by xluo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*node1;
	t_list	*node2;

	node1 = NULL;
	node2 = *begin_list;
	while (node2 != NULL)
	{
		if ((*cmp)(node2->data, data_ref) == 0)
		{
			if (node1 == NULL)
				*begin_list = node2->next;
			else
				node1->next = node2->next;
			free(node2);
		}
		node1 = node2;
		node2 = node2->next;
	}
}
