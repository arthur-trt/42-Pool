/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_numbers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 23:20:01 by atrouill          #+#    #+#             */
/*   Updated: 2019/08/18 23:20:12 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

char	*ft_find_numbers(char *buf, char *nbr)
{
	char	*str_str;
	char	*nbr_str;
	int		n;

	if (!(str_str = ft_strstr(buf, nbr)))
		return (NULL);
	n = 0;
	while (str_str[n] != '\n')
		n++;
	if (!(nbr_str = (char *)malloc(sizeof(*nbr_str) * n + 1)))
		return (NULL);
	n = 0;
	while (str_str[n] != '\n')
	{
		nbr_str[n] = str_str[n];
		n++;
	}
	return (nbr_str);
}
