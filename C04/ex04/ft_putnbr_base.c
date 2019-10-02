/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 15:22:02 by atrouill          #+#    #+#             */
/*   Updated: 2019/08/12 23:58:25 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_char_is_alpha(char c)
{
	if (!((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')))
		if (c < '0' || c > '9')
			return (0);
	return (1);
}

int		ft_check_base(char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		if (!ft_char_is_alpha(base[i]))
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int base_nb;

	base_nb = ft_strlen(base);
	if (base_nb <= 1)
		return ;
	if (ft_check_base(base))
	{
		if (nbr < 0)
		{
			nbr = (unsigned int)nbr;
			ft_putchar('-');
		}
		if (nbr >= base_nb)
		{
			ft_putnbr_base(nbr / base_nb, base);
		}
		ft_putchar(base[nbr % base_nb]);
	}
}
