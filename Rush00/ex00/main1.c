/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 10:53:47 by atrouill          #+#    #+#             */
/*   Updated: 2019/08/06 11:00:31 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	rush(int x, int y);

int		main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("lol");
		return 0;
	}

	rush(atoi(argv[1]), atoi(argv[2]));
}
