/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xluo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/25 15:46:40 by xluo              #+#    #+#             */
/*   Updated: 2017/08/25 16:10:56 by xluo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(
		t_btree **root, void *item, int (*cmpf)(void *, void *))
{
	t_btree	*node;

	node = *root;
	if (!node)
	{
		*root = btree_create_node(item);
		return ;
	}
	if ((*cmpf)(item, node->item) >= 0)
	{
		if (node->right)
			btree_insert_data(&node->right, item, cmpf);
		else
			node->right = btree_create_node(item);
	}
	else
	{
		if (node->left)
			btree_insert_data(&node->left, item, cmpf);
		else
			node->left = btree_create_node(item);
	}
}
