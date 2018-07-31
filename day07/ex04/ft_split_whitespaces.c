/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xluo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 14:42:56 by xluo              #+#    #+#             */
/*   Updated: 2017/08/17 22:23:48 by xluo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#define WHITESP(x) (x == ' ' || x == '\t' || x == '\n')

char	**alloc_nwords(char **table, char *str)
{
	int	i;
	int	nwords;

	i = 0;
	nwords = 0;
	while (WHITESP(str[i]))
		i++;
	while (str[i] != '\0')
	{
		i++;
		if (str[i] == '\0' || WHITESP(str[i]))
		{
			nwords++;
			while (WHITESP(str[i]))
				i++;
		}
	}
	table = (char**)malloc(sizeof(*table) * (nwords + 1));
	table[nwords] = 0;
	return (table);
}

char	**alloc_lenword(char **table, char *str)
{
	int	i;
	int	cwords;
	int	lenword;

	i = 0;
	lenword = 0;
	cwords = 0;
	while (WHITESP(str[i]))
		i++;
	while (str[i] != '\0')
	{
		i++;
		if (str[i] == '\0' || WHITESP(str[i]))
		{
			table[cwords++] = (char*)malloc(sizeof(**table) * (lenword + 1));
			lenword = 0;
			while (WHITESP(str[i]))
				i++;
		}
		lenword++;
	}
	return (table);
}

char	**ft_fill(char **table, char *str)
{
	int	i;
	int	x;
	int	y;

	i = 0;
	x = 0;
	y = 0;
	while (WHITESP(str[i]))
		i++;
	while (str[i] != '\0')
	{
		table[x][y++] = str[i];
		i++;
		if (str[i] == '\0' || WHITESP(str[i]))
		{
			table[x++][y] = '\0';
			y = 0;
			while (WHITESP(str[i]))
				i++;
		}
	}
	return (table);
}

char	**ft_split_whitespaces(char *str)
{
	char	**rslt;

	rslt = 0;
	rslt = alloc_nwords(rslt, str);
	rslt = alloc_lenword(rslt, str);
	rslt = ft_fill(rslt, str);
	return (rslt);
}
