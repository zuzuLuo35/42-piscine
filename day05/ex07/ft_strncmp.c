/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xluo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 11:18:46 by xluo              #+#    #+#             */
/*   Updated: 2017/08/15 11:36:42 by xluo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				cmp;

	i = 0;
	cmp = 0;
	while (i < n)
	{
		cmp += (s1[i] - s2[i]);
		if (s1[i] == '\0' && s2[i] == '\0')
			return (cmp);
		if (s1[n] == s2[n])
			i++;
		else
			return (cmp);
	}
	return (cmp);
}
