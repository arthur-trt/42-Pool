/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 15:02:09 by atrouill          #+#    #+#             */
/*   Updated: 2019/08/22 15:28:48 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int		ft_do_op(char **params)
{
	int sign;

	sign = ft_check_sign(params[2][0]);
	if (sign == ADD)
		return (ft_add(ft_atoi(params[1]), ft_atoi(params[3])));
	if (sign == SUB)
		return (ft_sub(ft_atoi(params[1]), ft_atoi(params[3])));
	if (sign == MULT)
		return (ft_mult(ft_atoi(params[1]), ft_atoi(params[3])));
	if (sign == DIV)
		return (ft_div(ft_atoi(params[1]), ft_atoi(params[3])));
	if (sign == MOD)
		return (ft_mod(ft_atoi(params[1]), ft_atoi(params[3])));
	return (0);
}

int		ft_check_sign(char c)
{
	if (c == '+')
		return (ADD);
	if (c == '-')
		return (SUB);
	if (c == '*')
		return (MULT);
	if (c == '/')
		return (DIV);
	if (c == '%')
		return (MOD);
	return (0);
}
