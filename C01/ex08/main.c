/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 16:46:54 by atrouill          #+#    #+#             */
/*   Updated: 2019/08/02 15:56:13 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ft_sort_int_tab(int *tab, int size);

int		main(void)
{
	int tab[400];
	int size = 400;
	int i;

	srand(time(NULL));
	i = 0;
	while (i < size)
	{
		tab[i++] = (rand() % 200) - 100; 
	}

	printf("Tab avant tri :\n");

	i = 0;
	while (i < size)
	{
		printf("tab[%d] = %d\n", i, tab[i]);
		i++;
	}

	ft_sort_int_tab(tab, size);
	
	i = 0;
	printf("\n\nTab apres tri :\n");
	while (i < size)
	{
		printf("tab[%d] = %d\n", i, tab[i]);
		i++;
	}
}
