/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xluo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 17:26:07 by xluo              #+#    #+#             */
/*   Updated: 2017/08/15 09:43:22 by xluo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	int		len_lttl;

	len_lttl = ft_strlen(to_find);
	if (len_lttl == 0)
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (j < len_lttl && str[i + j] == to_find[j])
		{
			j++;
			if (j == len_lttl)
				return (str + i);
		}
		i++;
	}
	return (0);
}
