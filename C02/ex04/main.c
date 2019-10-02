/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 11:51:10 by atrouill          #+#    #+#             */
/*   Updated: 2019/08/02 12:21:41 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_str_is_lowercase(char *str);

int		main(void)
{
		
	fputs(ft_str_is_lowercase("") ? "true\n" : "false\n", stdout);
	fputs(ft_str_is_lowercase("adahsudihassudvbds") ? "true\n" : "false\n", stdout);
	fputs(ft_str_is_lowercase("hiufsdhfiuhAjduisfnsdfhhuih") ? "true\n" : "false\n", stdout);
	fputs(ft_str_is_lowercase("uasfiusyfhuhsdhZ") ? "true\n" : "false\n", stdout);
	fputs(ft_str_is_lowercase("35154464515#34135443464#!$%!^#*&*@&*(&*(@^@&(*#^^(@Q*&^))))") ? "true\n" : "false\n", stdout);
}
