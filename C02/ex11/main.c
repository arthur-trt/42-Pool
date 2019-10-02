/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 23:49:52 by atrouill          #+#    #+#             */
/*   Updated: 2019/08/05 17:59:50 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_putstr_non_printable(char *str);

int		main(void)
{
	char str[] = "Bien le bonjour !";

	str[0] = 'a';
	str[1] = 3;
	str[5] = -121;

	ft_putstr_non_printable(str);

}
