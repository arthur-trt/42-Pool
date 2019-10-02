/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 07:35:18 by atrouill          #+#    #+#             */
/*   Updated: 2019/08/21 11:54:50 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	t_params params;

	if (argc == 1)
	{
		ft_tail_stdin();
		return (0);
	}
	else
	{
		ft_check_args(&params, argc, argv);
		printf("Offset : %d\n", params.offset);
		printf("Error : %d\n", params.error);
		printf("Start filename : %d\n", params.start_arg_file);
	}
	return (0);
}
