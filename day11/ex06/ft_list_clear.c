/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xluo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 17:50:14 by xluo              #+#    #+#             */
/*   Updated: 2017/08/23 20:42:29 by xluo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*node;
	t_list	*node_cl;

	node_cl = *begin_list;
	while (node_cl != NULL)
	{
		node = node_cl->next;
		free(node_cl);
		node_cl = node;
	}
	*begin_list = NULL;
}
