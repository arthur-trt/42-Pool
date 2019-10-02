/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 11:51:10 by atrouill          #+#    #+#             */
/*   Updated: 2019/08/03 19:43:39 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_str_is_uppercase(char *str);

int		main(void)
{
		
	fputs(ft_str_is_uppercase("") ? "true\n" : "false\n", stdout);
	fputs(ft_str_is_uppercase("OISDFUDIUGSDFGJSDJBSDUGJOIASDJSDV") ? "true\n" : "false\n", stdout);
	fputs(ft_str_is_uppercase("ASDG1") ? "true\n" : "false\n", stdout);
	fputs(ft_str_is_uppercase("aDSGDFGSDFG") ? "true\n" : "false\n", stdout);
	fputs(ft_str_is_uppercase("DFHSHFGHDFHTSRHa") ? "true\n" : "false\n", stdout);
}
