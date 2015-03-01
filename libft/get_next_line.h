/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguiter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 17:41:03 by tguiter           #+#    #+#             */
/*   Updated: 2015/01/07 17:19:34 by tguiter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <string.h>
# include "libft.h"

# define BUF_SIZE ((unsigned int)32)

int						get_next_line(int const fd, char **line);

typedef struct			s_buffer
{
	int					fd;
	char				str[(unsigned int)BUF_SIZE + 1];
	size_t				cursor;
	ssize_t				size;
}						t_buffer;

#endif
