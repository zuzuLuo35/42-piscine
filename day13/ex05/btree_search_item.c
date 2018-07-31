/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xluo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/25 16:13:13 by xluo              #+#    #+#             */
/*   Updated: 2017/08/25 23:19:22 by xluo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

void	*btree_search_item(
		t_btree *root, void *data_ref, int (*cmpf)(void *, void *))
{
	if (!root)
		return (NULL);
	if ((*cmpf)(data_ref, root->item) == 0)
		return (root->item);
	if ((*cmpf)(data_ref, root->item) < 0)
		btree_search_item(root->left, data_ref, cmpf);
	else
		btree_search_item(root->right, data_ref, cmpf);
}
