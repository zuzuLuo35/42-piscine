/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xluo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 17:34:52 by xluo              #+#    #+#             */
/*   Updated: 2017/08/23 20:44:22 by xluo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list	*target;

	target = begin_list;
	while (target != NULL)
	{
		if ((*cmp)(target->data, data_ref) == 0)
			return (target);
		target = target->next;
	}
	return (NULL);
}
