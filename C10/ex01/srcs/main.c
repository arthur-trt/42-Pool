/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 15:58:17 by atrouill          #+#    #+#             */
/*   Updated: 2019/08/20 03:09:22 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc == 1)
		ft_cat_stdin();
	else
	{
		while (i < argc)
		{
			if (argv[i][0] == '-' && argv[i][1] == 0)
				ft_cat_stdin();
			else
			{
				if(ft_cat_stdout(argv[i]) != 0)
				{
					ft_putstr(ERR, basename(argv[0]));
					ft_putstr(ERR, ": ");
					ft_putstr(ERR, argv[i]);
					ft_putstr(ERR, ": ");
					ft_putstr(ERR, strerror(errno));
					ft_putchar(ERR, '\n');
				}
			}
			i++;
		}
	}
	return (0);
}
