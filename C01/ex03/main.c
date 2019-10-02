/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 12:03:28 by atrouill          #+#    #+#             */
/*   Updated: 2019/08/01 12:57:30 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int a;
	int b;
	int mod;
	int div;

	a = 5;
	b = 2;

	printf("a : %d, b : %d\n", a, b);

	ft_div_mod(a, b, &div, &mod);

	printf("a : %d, b : %d, div : %d, mod : %d\n", a, b, div, mod);
}
