/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 10:45:33 by atrouill          #+#    #+#             */
/*   Updated: 2019/08/15 10:42:08 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*res;
	int		i;

	i = 0;
	res = NULL;
	if (min >= max)
		return (res);
	if (!(res = malloc(sizeof(*res) * (max - min))))
		return (res);
	while (i < max - min)
	{
		res[i] = i + min;
		i++;
	}
	return (res);
}
