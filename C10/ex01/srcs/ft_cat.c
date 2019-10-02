/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 15:16:19 by atrouill          #+#    #+#             */
/*   Updated: 2019/08/20 03:10:01 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"
#include <stdio.h>

/*
** Display file on the standard output
** In case of error, return `errno`
** If no problem return 0
*/

int		ft_cat_stdout(char *filename)
{
	int		fd;
	char	buff;

	if ((fd = open(filename, O_RDONLY)) == -1)
		return (errno);
	while (read(fd, &buff, 1) > _EOF)
	{
		ft_putchar(OUT, buff);
	}
	if (read(fd, &buff, 1) == -1)
	{
		close(fd);
		return (errno);
	}
	close(fd);
	return (0);
}

/*
** Open and print standard input
** In case of error, return `errno`
** If no problem return 0
*/

int		ft_cat_stdin(void)
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
