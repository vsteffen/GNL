/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsteffen <vsteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/07 16:19:58 by vsteffen          #+#    #+#             */
/*   Updated: 2016/08/23 16:23:24 by jcamhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 100

int					get_next_line(const int fd, char **line);

typedef	struct		s_gnl
{
	char			*line;
	int				fd;
	struct s_gnl	*next;
}					t_gnl;

#endif
