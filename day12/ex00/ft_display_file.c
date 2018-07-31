/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xluo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 14:34:01 by xluo              #+#    #+#             */
/*   Updated: 2017/08/24 21:21:15 by xluo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#define BUF_SIZE 4096

int		main(int argc, char **argv)
{
	char	buf[BUF_SIZE];
	int		ret;
	int		fd;

	if ((fd = open(argv[1], O_RDONLY)) == -1 || argc != 2)
	{
		if (argc < 2)
			write(2, "File name missing.\n", 19);
		else if (argc > 2)
			write(2, "Too many arguments.\n", 20);
		return (1);
	}
	while ((ret = read(fd, buf, BUF_SIZE)) && ret != -1)
		write(1, buf, ret);
	close(fd);
	return (0);
}
