/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xluo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 21:38:35 by xluo              #+#    #+#             */
/*   Updated: 2017/08/15 11:02:21 by xluo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	cmp;

	i = 0;
	cmp = 0;
	while (1)
	{
		cmp += (s1[i] - s2[i]);
		if (s1[i] == '\0' && s2[i] == '\0')
			return (cmp);
		if (s1[i] == s2[i])
			i++;
		else
			return (cmp);
	}
}
