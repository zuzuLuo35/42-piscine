/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xluo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 17:27:18 by xluo              #+#    #+#             */
/*   Updated: 2017/08/23 22:42:52 by xluo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*node;
	t_list	*list;
	int		i;

	i = 0;
	list = NULL;
	node = NULL;
	while (i < ac)
	{
		list = ft_create_elem(av[i]);
		list->next = node;
		node = list;
		i++;
	}
	return (list);
}
