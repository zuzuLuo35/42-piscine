/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xluo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 15:43:31 by xluo              #+#    #+#             */
/*   Updated: 2017/08/23 20:40:49 by xluo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*new;
	t_list	*node;

	new = ft_create_elem(data);
	if (*begin_list != NULL)
	{
		node = *begin_list;
		while (node->next != NULL)
			node = node->next;
		node->next = new;
	}
	else
		*begin_list = new;
}
