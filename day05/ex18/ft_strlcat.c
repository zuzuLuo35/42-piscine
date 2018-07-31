/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xluo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 16:45:39 by xluo              #+#    #+#             */
/*   Updated: 2017/08/15 20:22:50 by xluo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	lendest;

	i = 0;
	lendest = 0;
	while (dest[lendest] != '\0')
		lendest++;
	while (src[i] != '\0' && (i < (size - 1 - lendest)))
	{
		dest[lendest + i] = src[i];
		i++;
	}
	dest[lendest + i] = '\0';
	if (i < (size - 1 - lendest))
		return (lendest + i + 1);
	else
		return (size);
}
