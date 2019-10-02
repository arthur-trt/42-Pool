/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 09:44:19 by atrouill          #+#    #+#             */
/*   Updated: 2019/08/04 10:49:10 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int *tab, int n)
{
	int	i;
	int	display;

	display = 1;
	i = 0;
	while (++i < n)
		if (tab[i - 1] >= tab[i])
			display = 0;
	if (display)
	{
		i = -1;
		while (++i < n)
			ft_putchar(tab[i] + 48);
		if (tab[0] < (10 - n))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_comb1(void)
{
	write(1, "0, 1, 2, 3, 4, 5, 6, 7, 8, 9", 28);
}

void	ft_print_combn(int n)
{
	int i;
	int num[n];

	i = -1;
	if (n == 1)
		ft_print_comb1();
	while (++i < n && (n < 10 && n > 1))
		num[i] = i;
	while (num[0] <= (10 - n) && (n < 10 && n > 1))
	{
		ft_print(num, n);
		num[n - 1]++;
		i = n;
		while (i != 0)
		{
			i--;
			if (num[i] > 9)
			{
				num[i - 1]++;
				num[i] = 0;
			}
		}
	}
}
