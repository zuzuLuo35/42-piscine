/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xluo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 20:58:10 by xluo              #+#    #+#             */
/*   Updated: 2017/08/24 22:49:41 by xluo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <errno.h>

# define BUF_SIZE 29000
# define EACCES_MSG ": Permission denied\n"
# define ENOENT_MSG ": No such file or directory\n"
# define EISDIR_MSG ": Is a directory\n"
# define EBADF_MSG ": Bad file number\n"
# define EAGAIN_MSG ": Resource temporarily unavailable\n"
# define EINTR_MSG ": Interrupted function call\n"
# define EIO_MSG ": Input/output error\n"
# define EINVAL_MSG ": Invalid argument\n"

#endif
