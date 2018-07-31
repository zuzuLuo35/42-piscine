/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xluo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 17:12:08 by xluo              #+#    #+#             */
/*   Updated: 2017/08/20 17:04:34 by xluo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		nmatch(char *s1, char *s2)
{
	if (s1[0] == '\0' && s2[0] == '\0')
		return (1);
	if (s1[0] == s2[0])
		return (nmatch(s1 + 1, s2 + 1));
	else if (s2[0] == '*' && s1[0] == '\0')
		return (nmatch(s1, s2 + 1));
	else if (s2[0] == '*' && s1[0] != '\0')
		return (nmatch(s1 + 1, s2) + nmatch(s1, s2 + 1));
	else
		return (0);
}
