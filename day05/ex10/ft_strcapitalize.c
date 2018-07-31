/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xluo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 12:03:20 by xluo              #+#    #+#             */
/*   Updated: 2017/08/15 14:29:13 by xluo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		islnbr(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (islnbr(str[i]) == 1)
		{
			if (!(islnbr(str[i - 1])))
			{
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] -= 32;
			}
			else if (islnbr(str[i - 1]))
			{
				if (str[i] >= 'A' && str[i] <= 'Z')
					str[i] += 32;
			}
		}
		i++;
	}
	return (str);
}
