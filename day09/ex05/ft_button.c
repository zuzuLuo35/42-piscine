/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_button.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xluo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 23:27:03 by xluo              #+#    #+#             */
/*   Updated: 2017/08/17 23:42:47 by xluo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_button(int i, int j, int k)
{
	if ((i <= j && i >= k) || (i >= j && i <= k))
		return (i);
	if ((j <= i && j >= k) || (j >= i && j <= k))
		return (j);
	if ((k <= i && k >= j) || (k >= i && k <= j))
		return (k);
}
