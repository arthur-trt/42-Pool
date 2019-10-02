/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testint2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 10:46:17 by aherbine          #+#    #+#             */
/*   Updated: 2019/08/18 23:40:56 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

char			*obtain_dict(int ac, char **argv)
{
	char *dict_file;

	if (ac == 2)
	{
		dict_file = "numbers.dict";
	}
	else if (ac == 3)
	{
		dict_file = argv[1];
	}
	else
	{
		ft_putstr("Error\n");
		return (0);
	}
	return (dict_file);
}

unsigned long	obtain_nbr(int ac, char **argv)
{
	unsigned long nbr;

	if (ac == 2)
	{
		if (ft_strisdigit(argv[1]))
			return (nbr = ft_atoul(argv[1]));
		else
		{
			ft_putstr("Error\n");
		}
	}
	else if (ac == 3)
	{
		if (ft_strisdigit(argv[2]))
			return (nbr = ft_atoul(argv[2]));
		else
		{
			ft_putstr("Error\n");
		}
	}
	else
	{
		ft_putstr("Error\n");
	}
	return (-1);
}

int				main(int argc, char **argv)
{
	char			*dict_file;
	unsigned long	nbr;
	char			*dict;

	dict_file = obtain_dict(argc, argv);
	nbr = obtain_nbr(argc, argv);
	if (dict_file != 0)
	{
		dict = ft_make_dict(dict_file);
		if (dict != NULL)
		{
			ft_process_nbr(nbr, dict);
			free(dict);
		}
	}
	return (0);
}
