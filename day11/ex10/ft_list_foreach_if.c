/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xluo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 17:19:16 by xluo              #+#    #+#             */
/*   Updated: 2017/08/23 20:44:06 by xluo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_foreach_if(
		t_list *begin_list, void (*f)(void *), void *data_ref, int (*cmp)())
{
	t_list	*node;

	node = begin_list;
	while (node != NULL)
	{
		if ((*cmp)(node->data, data_ref) == 0)
			(*f)(node->data);
		node = node->next;
	}
}
