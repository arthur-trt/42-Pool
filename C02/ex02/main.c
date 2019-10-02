/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 01:50:27 by atrouill          #+#    #+#             */
/*   Updated: 2019/08/02 16:35:28 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_alpha(char *str);

int		main()
{
	fputs(ft_str_is_alpha("abdjisjfnsdfuishdfjsifas") ? "true" : "false", stdout);
	fputs(ft_str_is_alpha("abdjisjfnsdfuishd3fjsifas") ? "true" : "false", stdout);
	fputs(ft_str_is_alpha("abdjisjf``___`]]]]nsdfuishdfjsifas") ? "true" : "false", stdout);

}
