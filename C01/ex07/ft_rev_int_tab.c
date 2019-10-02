/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 15:11:16 by atrouill          #+#    #+#             */
/*   Updated: 2019/08/02 10:38:10 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int tab_tmp[size];
	int i;
	int j;

	i = 0;
	j = size - 1;
	while (i < size)
	{
		tab_tmp[j] = tab[i];
		i++;
		j--;
	}
	i = 0;
	while (i < size)
	{
		tab[i] = tab_tmp[i];
		i++;
	}
}
