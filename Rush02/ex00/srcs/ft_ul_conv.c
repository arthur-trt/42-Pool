/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ul_conv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 23:23:10 by atrouill          #+#    #+#             */
/*   Updated: 2019/08/18 23:25:27 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

char			*ft_ultoa(unsigned long nbr)
{
	char			*res;
	unsigned long	tmp;
	int				i;
	int				k;
	int				nb_nb;

	i = 0;
	nb_nb = ft_count_num(nbr);
	if (!(res = malloc(sizeof(res) * nb_nb)))
		return (NULL);
	while (nb_nb != 0)
	{
		tmp = nbr;
		k = 0;
		while (k < nb_nb)
		{
			tmp = tmp / 10;
			k++;
		}
		res[i] = (tmp % 10) + 48;
		i++;
		nb_nb--;
	}
	res[i] = (nbr % 10) + 48;
	res[++i] = 0;
	return (res);
}

unsigned long	ft_atoul(char *nbr)
{
	int				i;
	unsigned long	res;

	i = 0;
	res = 0;
	while (nbr[i])
	{
		res = res * 10 + (nbr[i] - 48);
		i++;
	}
	return (res);
}
