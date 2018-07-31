/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xluo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/25 15:32:08 by xluo              #+#    #+#             */
/*   Updated: 2017/08/25 15:58:39 by xluo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_suffix(t_btree *root, void (*apply)(void *))
{
	if (root->left)
		btree_apply_suffix(root->left);
	if (root->right)
		btree_apply_suffix(root->right);
	(*applyf)(root->item);
}
