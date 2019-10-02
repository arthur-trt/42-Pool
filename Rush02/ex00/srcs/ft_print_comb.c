/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decomp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 17:33:18 by atrouill          #+#    #+#             */
/*   Updated: 2019/08/18 23:29:55 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	ft_write_hundred(char *dict, unsigned long nbr)
{
	ft_putchar(' ');
	ft_putstr_alpha(ft_find_numbers(dict, ft_ultoa(nbr / 100)));
	ft_putchar(' ');
	ft_putstr_alpha(ft_find_numbers(dict, ft_ultoa(100)));
}

int		ft_write_ten(char *dict, int tmp)
{
	ft_putchar(' ');
	ft_putstr_alpha(ft_find_numbers(dict, ft_ultoa(tmp)));
	return (1);
}

void	ft_write_ten2(char *dict, int tmp, unsigned long nbr)
{
	tmp = nbr - ((nbr / 100) * 100) - (nbr % 10);
	ft_putchar(' ');
	ft_putstr_alpha(ft_find_numbers(dict, ft_ultoa(tmp)));
}

void	ft_print_comb(char *dict, unsigned long nbr, unsigned long rank)
{
	int tmp;
	int finded;

	finded = 0;
	tmp = 0;
	if (nbr / 100 > 0)
		ft_write_hundred(dict, nbr);
	if (nbr / 10 > 0)
	{
		tmp = nbr - ((nbr / 100) * 100);
		if (ft_find_numbers(dict, ft_ultoa(tmp)) != NULL)
			finded = ft_write_ten(dict, tmp);
		else
			ft_write_ten2(dict, tmp, nbr);
	}
	if (nbr % 10 != 0 && finded == 0)
	{
		ft_putchar(' ');
		ft_putstr_alpha(ft_find_numbers(dict, ft_ultoa(nbr % 10)));
	}
	if (rank != 1)
	{
		ft_putchar(' ');
		ft_putstr_alpha(ft_find_numbers(dict, ft_ultoa(rank)));
	}
}
