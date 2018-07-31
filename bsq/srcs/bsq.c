/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xluo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/28 10:56:41 by xluo              #+#    #+#             */
/*   Updated: 2017/08/30 22:33:49 by xluo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_getinput(int fd)
{
	char	*out;
	int		ret;
	char	buf[BUF_SIZE + 1];
	char	*tmp;
	long	t_len;

	if (fd == -1)
		return ("0\n");
	t_len = 0;
	out = (char *)malloc(10);
	*out = '\0';
	while ((ret = read(fd, buf, BUF_SIZE)) > 0)
	{
		tmp = ft_strcpy_allo(tmp, out);
		free(out);
		t_len += ret;
		out = (char *)malloc(sizeof(char) * (t_len + 1));
		*out = '\0';
		buf[ret] = '\0';
		out = ft_strcat(out, tmp);
		out = ft_strcat(out, buf);
		free(tmp);
	}
	close(fd);
	return (out);
}

int		main(int ac, char **av)
{
	int		i;
	int		fd;
	char	*info;

	i = 0;
	if (ac == 1)
	{
		info = ft_getinput(0);
		print_pat(info);
	}
	else
		while (++i < ac)
		{
			fd = open(av[i], O_RDONLY);
			info = ft_getinput(fd);
			print_pat(info);
		}
	return (0);
}
