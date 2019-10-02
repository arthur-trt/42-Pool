/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 14:50:44 by atrouill          #+#    #+#             */
/*   Updated: 2019/08/22 15:52:34 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int		main(int argc, char **argv)
{
	int res;

	if (argc != 4)
		return (0);
	if (ft_strlen(argv[2]) != 1 || ft_check_sign(argv[2][0]) == 0)
	{
		ft_putnbr(0);
		ft_putchar('\n');
		return (0);
	}
	if (ft_check_sign(argv[2][0]) == DIV && ft_atoi(argv[3]) == 0)
	{
		ft_putstr("Stop : division by zero\n");
		return (0);
	}
	if (ft_check_sign(argv[2][0]) == MOD && ft_atoi(argv[3]) == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	res = ft_do_op(argv);
	ft_putnbr(res);
	ft_putchar('\n');
	return (0);
}
