/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xluo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 17:40:13 by xluo              #+#    #+#             */
/*   Updated: 2017/08/16 20:42:28 by xluo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

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

void	ft_sort(int len, char **list)
{
	char	*tmp;
	int		i;
	int		sort;

	sort = 1;
	while (sort)
	{
		sort = 0;
		i = 1;
		while (i < (len - 1))
		{
			if (ft_strcmp(list[i], list[i + 1]) > 0)
			{
				tmp = list[i];
				list[i] = list[i + 1];
				list[i + 1] = tmp;
				sort = 1;
			}
			i++;
		}
	}
}

int		main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	ft_sort(argc, argv);
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}
