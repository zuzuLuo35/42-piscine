/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xluo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 23:24:23 by xluo              #+#    #+#             */
/*   Updated: 2017/08/22 12:13:48 by xluo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	cmp;

	i = 0;
	cmp = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else
		{
			cmp += (s1[i] - s2[i]);
			return (cmp);
		}
	}
	return (cmp);
}

void	ft_sort_wordtab(char **tab)
{
	int		i;
	char	*tmp;
	int		swap;

	swap = 1;
	while (swap)
	{
		i = 0;
		swap = 0;
		while (tab[i + 1] != 0)
		{
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
				swap = 1;
			}
			i++;
		}
	}
}
