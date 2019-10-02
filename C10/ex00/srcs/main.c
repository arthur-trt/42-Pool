/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 12:28:48 by atrouill          #+#    #+#             */
/*   Updated: 2019/08/21 18:59:50 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int		main(int argc, char **argv)
{
	if (argc < 2)
		ft_putstr(ERR, "File name missing.\n");
	else if (argc > 2)
		ft_putstr(ERR, "Too many arguments.\n");
	else
		if (ft_display_file(argv[1]) == 0)
			ft_putstr(ERR, "Cannot read file.\n");
	return (0);
}
