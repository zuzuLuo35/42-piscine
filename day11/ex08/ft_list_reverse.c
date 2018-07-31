/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xluo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 14:43:34 by xluo              #+#    #+#             */
/*   Updated: 2017/08/23 21:03:12 by xluo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*tmp;

	if (begin_list == NULL || *begin_list == NULL)
		return ;
	node1 = NULL;
	node2 = *begin_list;
	while (node2 != NULL)
	{
		tmp = node2->next;
		node2->next = node1;
		node1 = node2;
		node2 = tmp;
	}
	*begin_list = node1;
}
