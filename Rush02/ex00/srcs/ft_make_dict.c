/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_dict.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 23:20:25 by atrouill          #+#    #+#             */
/*   Updated: 2019/08/18 23:21:12 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

char	*ft_make_dict(char *dict)
{
	int		fd;
	int		size;
	int		ret;
	char	*buf;
	char	tmp[1];

	fd = open(dict, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Error\n");
		return (NULL);
	}
	size = 0;
	while ((ret = read(fd, tmp, 1) > 0))
		size++;
	close(fd);
	fd = open(dict, O_RDONLY);
	if (!(buf = (char *)malloc(sizeof(*buf) * size + 1)))
		return (NULL);
	read(fd, buf, size);
	buf[size] = '\0';
	close(fd);
	return (buf);
}
