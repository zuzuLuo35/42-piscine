/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xluo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 16:08:11 by xluo              #+#    #+#             */
/*   Updated: 2017/08/24 22:01:15 by xluo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	perr(char *filename)
{
	write(2, "cat: ", 5);
	write(2, filename, ft_strlen(filename));
	if (errno == EACCES)
		write(2, EACCES_MSG, ft_strlen(EACCES_MSG));
	else if (errno == ENOENT)
		write(2, ENOENT_MSG, ft_strlen(ENOENT_MSG));
	else if (errno == EISDIR)
		write(2, EISDIR_MSG, ft_strlen(EISDIR_MSG));
	else if (errno == EBADF)
		write(2, EBADF_MSG, ft_strlen(EBADF_MSG));
	else if (errno == EAGAIN)
		write(2, EAGAIN_MSG, ft_strlen(EAGAIN_MSG));
	else if (errno == EINTR)
		write(2, EINTR_MSG, ft_strlen(EINTR_MSG));
	else if (errno == EIO)
		write(2, EIO_MSG, ft_strlen(EIO_MSG));
	else if (errno == EINVAL)
		write(2, EINVAL_MSG, ft_strlen(EINVAL_MSG));
	else
		write(2, ": Unknown error\n", 16);
}

int		ft_display(int fd)
{
	char	buf[BUF_SIZE];
	int		ret;

	if (fd == -1)
		return (1);
	while ((ret = read(fd, buf, BUF_SIZE)) && ret != -1)
		write(1, buf, ret);
	close(fd);
	return (0);
}

int		main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
		return (ft_display(0));
	i = 1;
	while (i < argc)
	{
		if (ft_display(open(argv[i], O_RDONLY)) != 0)
			perr(argv[i]);
		i++;
	}
	return (0);
}
