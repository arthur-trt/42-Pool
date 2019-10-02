/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 19:17:00 by exam              #+#    #+#             */
/*   Updated: 2019/08/16 20:12:55 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_count_num(unsigned int nbr)
{
	int i;

	i = 0;
	while (nbr >= 10)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	char			*res;
	unsigned int	tmp;
	int				i;
	int				k;
	int				nb_nb;
	int				neg;

	i = 0;
	if (!(res = malloc(sizeof(res) * 12)))
		return (res);
	if (nbr < 0)
	{
		res[i] = 45;
		neg = -1;
		i++;
	}
	else 
		neg = 1;
	tmp = nbr * neg;
	nb_nb = ft_count_num(tmp);
	while (nb_nb != 0)
	{
		tmp = nbr * neg;
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
	
	if (nbr == -2147483648)
		res[i] = '8';
	else
		res[i] = ((nbr * neg) % 10) + 48;
	res[++i] = 0;

	return (res);
}
