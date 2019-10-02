/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solver.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/11 11:48:49 by atrouill          #+#    #+#             */
/*   Updated: 2019/08/11 12:54:27 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_utils.h"

void	*ft_generate_all_soluces(char *soluce, int start, int end)
{
	int i;

	i = start;
	if (start != end)
	{
		while (i <= end)
		{
			ft_swap((soluce + i), ((soluce + start)));
			ft_generate_all_soluces(soluce, start + 1, end);
			ft_swap((soluce + i), (soluce + start));
			i++;
		}
	}
	else 
	{
		printf("%s", soluce);		
	}
}
