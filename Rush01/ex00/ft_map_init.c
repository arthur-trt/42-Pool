/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 12:41:27 by atrouill          #+#    #+#             */
/*   Updated: 2019/08/10 16:50:49 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_utils.h"
#include "ft_map_init.h"

int		**ft_map_init(int size, char *arg)
{
	int **map;
	int i;

	map = malloc(sizeof(map) * size);
	*map = malloc(sizeof(map) * size * size);
	if (ft_verif_arg(size, arg))
	{
		i = 0;
		while (i < size * size)
		{
			map[i / 4][i % 4] = 0;
		}
	}
	return (map);
}

int		ft_verif_arg(int size, char *arg)
{
	int i;

	if (ft_strlen(arg) != (size * 2 - 1))
		return (0);
	i = 0;
	while (i < (size * 2 - 1))
	{
		if (arg[i] > size || arg[i] < '1')
			return (0);
		i = i +2;
	}
	i = 1;
	while (i < (size * 2 -1))
	{
		if (arg[i] != 32)
			return (0);
		i = i + 2;
	}
	return (1);
}
