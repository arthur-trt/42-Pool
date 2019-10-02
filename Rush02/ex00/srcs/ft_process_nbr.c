/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_nbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 23:21:47 by atrouill          #+#    #+#             */
/*   Updated: 2019/08/18 23:22:20 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int				ft_values_grp(unsigned long nb)
{
	int	value;

	value = 0;
	while (nb > 0)
	{
		nb = nb / 1000;
		value++;
	}
	return (value);
}

unsigned long	ft_multiples(int value)
{
	unsigned long	multi;
	int				i;

	i = 0;
	multi = 1;
	while (i < value - 1)
	{
		multi = multi * 1000;
		i++;
	}
	return (multi);
}

void			ft_process_nbr(unsigned long nb, char *dict)
{
	unsigned long	multi;
	unsigned long	grp;
	unsigned long	rest;
	int				value_grp;

	value_grp = ft_values_grp(nb);
	multi = ft_multiples(value_grp);
	grp = 0;
	rest = nb;
	while (multi > 0)
	{
		grp = rest / multi;
		rest = rest % multi;
		ft_print_comb(dict, grp, multi);
		multi = multi / 1000;
	}
}
