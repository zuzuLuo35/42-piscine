/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xluo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/25 22:43:35 by xluo              #+#    #+#             */
/*   Updated: 2017/08/25 23:16:25 by xluo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int		btree_level_count(t_btree *root)
{
	int	cleft;
	int	cright;

	if (!root)
		return (0);
	cleft = btree_level_count(root->left);
	cright = btree_level_count(root->right);
	return (1 + (cleft > cright ? cleft : cright))
}
