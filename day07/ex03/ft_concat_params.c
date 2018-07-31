/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xluo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 11:51:18 by xluo              #+#    #+#             */
/*   Updated: 2017/08/17 23:20:19 by xluo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		argsize(int len, char **list)
{
	int	i;
	int	j;
	int	size;

	i = 1;
	size = 0;
	while (i < len)
	{
		j = 0;
		while (list[i][j] != '\0')
		{
			size++;
			j++;
		}
		i++;
	}
	return (size);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		n;
	char	*rslt;
	int		len;

	i = 1;
	n = 0;
	len = argsize(argc, argv) + argc;
	rslt = (char*)malloc(sizeof(*rslt) * (len + 1));
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			rslt[n++] = argv[i][j];
			j++;
		}
		rslt[n++] = '\n';
		i++;
	}
	rslt[--n] = '\0';
	return (rslt);
}
