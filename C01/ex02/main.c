/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 11:53:44 by atrouill          #+#    #+#             */
/*   Updated: 2019/08/01 12:00:05 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int		main(void)
{
	int		a;
	int		b;
	int		*ptra;
	int		*ptrb;

	a = 1;
	b = 2;

	ptra = &a;
	ptrb = &b;

	ft_swap(ptra, ptrb);

	printf("a : %d, b : %d\n", a, b);
}
