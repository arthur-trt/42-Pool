/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 11:24:45 by atrouill          #+#    #+#             */
/*   Updated: 2019/08/02 11:36:32 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_str_is_numeric(char *str);

int		main(void)
{
	fputs(ft_str_is_numeric("") ? "true\n" : "false\n", stdout);
	fputs(ft_str_is_numeric("1211316131618531864987844651") ? "true\n" : "false\n", stdout);
	fputs(ft_str_is_numeric("11561616818613168681351681616^") ? "true\n" : "false\n", stdout);
}
