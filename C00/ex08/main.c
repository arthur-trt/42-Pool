/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/04 03:19:37 by atrouill          #+#    #+#             */
/*   Updated: 2019/08/05 12:08:19 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_print_combn(int n);

int		main(int argc, char *argv[])
{
	if ( argc != 2)
		printf("ONE argument needed");
	else
		ft_print_combn(atoi(argv[1]));

	return 0;
}
