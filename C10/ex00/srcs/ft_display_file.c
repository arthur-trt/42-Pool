/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 12:32:54 by atrouill          #+#    #+#             */
/*   Updated: 2019/08/19 12:58:27 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

#include <stdio.h>

int		ft_display_file(char *file_name)
{
	int		r;
	int		fd;
	char	buff;

	if ((fd = open(file_name, O_RDONLY)) == -1)
		return (0);
	while ((r = read(fd, &buff, 1)) > 0)
	{
		ft_putchar(OUT, buff);
	}
	if (r == -1)
		return (0);
	close(fd);
	return (1);
}
