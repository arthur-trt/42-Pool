/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 18:47:53 by exam              #+#    #+#             */
/*   Updated: 2019/08/09 19:04:03 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_rrange(int start, int end)
{
	int *tab;
	int i;
	int range;

	i = 0;
	if (end >= start)
	{
		range = end - start + 1;
		tab = malloc(sizeof(tab) * range);
		while (i < range)
		{
			tab[i] = end;
			end--;
			i++;
		}
	}
	else
	{

		range = (-1 * (end - start)) + 1;
		tab = malloc(sizeof(tab) * range);
		while (i < range)
		{
			tab[i] = end;
			end++;
			i++;
		}
	}
	return (tab);
}
