/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 19:45:44 by atrouill          #+#    #+#             */
/*   Updated: 2019/08/21 02:11:08 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"
#include <stdio.h>

/*
** Reproduce the tail function with -c arg, take filename and -c `offset` in arg
** Return the errno of ft_file_size in case of problem or 0
*/

int		ft_tail_stdout(char *filename, int offset)
{
	int		size;
	int		fd;
	int		i;
	char	buff;

	if (ft_file_size(filename, &size) != 0)
		return (ft_file_size(filename, &size));
	i = 0;
	fd = open(filename, O_RDONLY);
	while (read(fd, &buff, 1) > _EOF)
	{
		if (i >= (size - offset))
		{
			ft_putchar(OUT, buff);
		}
		i++;
	}
	return (0);
}

/*
** Reproduce the tail fucntion without arg
*/

int		ft_tail_stdin(void)
{
	int		r;
	char	buff;

	r = 1;
	while (r != _EOF)
	{
		r = read(IN, &buff, 1);
		ft_putchar(OUT, buff);
	}
	return (0);
}
