/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 18:31:47 by exam              #+#    #+#             */
/*   Updated: 2019/08/09 18:44:35 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		ft_find_char_pos(char *str, int start_pos, char c)
{
	while (str[start_pos] != '\0')
	{
		if (str[start_pos] == c)
		{
			return (start_pos);
		}
		start_pos++;
	}
	return (-1);
}

int		main(int argc, char *argv[])
{
	int i;
	int last_pos;

	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	while (argv[1][i] != '\0')
	{
		last_pos = ft_find_char_pos(argv[2], last_pos, argv[1][i]);
		if (last_pos == -1)
		{
			write(1, "\n", 1);
			return (0);
		}
		i++;
	}
	ft_putstr(argv[1]);
	write(1, "\n", 1);
	return (0);
}

