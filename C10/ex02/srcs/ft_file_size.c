/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 19:47:23 by atrouill          #+#    #+#             */
/*   Updated: 2019/08/21 02:08:55 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

/*
** Obtain the length of a file and sotre the size in the pointer size
** Return 0 if no problem or the errno code error
*/

int		ft_file_size(char *filename, int *size)
{
	int		fd;
	char	buff;

	*size = 0;
	if ((fd = open(filename, O_RDONLY)) == -1)
		return (errno);
	while (read(fd, &buff, 1) > _EOF)
	{
		*size = *size + 1;
	}
	if (read(fd, &buff, 1) == -1)
	{
		close(fd);
		return (errno);
	}
	close(fd);
	return (0);
}
