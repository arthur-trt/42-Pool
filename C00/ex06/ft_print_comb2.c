/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 14:47:55 by atrouill          #+#    #+#             */
/*   Updated: 2019/08/04 10:35:57 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_two_doubles(int a1, int a2, int b1, int b2)
{
	ft_putchar('0' + a1);
	ft_putchar('0' + a2);
	ft_putchar(' ');
	ft_putchar('0' + b1);
	ft_putchar('0' + b2);
	if (!(a1 == 9 && a2 == 8 && b1 == 9 && b2 == 9))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2_helper(int a1, int a2)
{
	int b1;
	int b2;

	b1 = a1;
	b2 = a2 + 1;
	while (b1 <= 9)
	{
		while (b2 <= 9)
		{
			ft_print_two_doubles(a1, a2, b1, b2);
			b2++;
		}
		b1++;
		b2 = 0;
	}
}

void	ft_print_comb2(void)
{
	int a1;
	int a2;

	a1 = 0;
	while (a1 <= 9)
	{
		a2 = 0;
		while (a2 <= 9)
		{
			ft_print_comb2_helper(a1, a2);
			a2++;
		}
		a1++;
	}
}
