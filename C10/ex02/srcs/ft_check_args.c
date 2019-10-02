/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 07:41:59 by atrouill          #+#    #+#             */
/*   Updated: 2019/08/21 13:14:53 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

/*
** Define if the offset is in argv[2] or argv[3]
** Return the offset and the start indice of filename in a struct
*/

int		ft_check_args(t_params *res, int argc, char **argv)
{
	if (argv[1][0] == '-' && argv[1][1] == 'c')
	{
		if (ft_strlen(argv[1]) > 2)
		{
			ft_check_offset(res, argv[1], 2);
			res->start_arg_file = 2;
		}
		else if (argc > 2)
		{
			ft_check_offset(res, argv[2], 0);
			res->start_arg_file = 3;
		}
		else
			res->error = -1;
	}
	else
		res->error = -2;
	return (0);
}

void	ft_check_offset(t_params *params, char *str, int start)
{

	params->error = -2;
	while (str[start] && (str[start] >= '0' && str[start] <= '9'))
	{
		params->error = 0;
		params->offset = params->offset * 10 + (str[start] - 48);
		start++;
	}
}
