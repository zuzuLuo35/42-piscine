/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xluo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 15:30:02 by xluo              #+#    #+#             */
/*   Updated: 2017/08/18 15:56:39 by xluo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_strfind(char *str, char *to_find)
{
	int	i;
	int	j;
	int	len_lttl;

	len_lttl = ft_strlen(to_find);
	if (len_lttl == 0)
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (j < len_lttl && str[i + j] == to_find[j])
		{
			j++;
			if (j == len_lttl)
				return (1);
		}
		i++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		i;
	char	*display;

	display = "Alert!!!";
	i = 1;
	while (i < argc)
	{
		if (ft_strfind(argv[i], "president"))
			ft_putstr(display);
		if (ft_strfind(argv[i], "attack"))
			ft_putstr(display);
		if (ft_strfind(argv[i], "Powers"))
			ft_putstr(display);
		i++;
	}
	return (0);
}
