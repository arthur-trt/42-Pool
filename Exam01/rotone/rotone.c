/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 18:19:42 by exam              #+#    #+#             */
/*   Updated: 2019/08/09 18:28:09 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char *argv[])
{
	int i;

	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	i = 0;
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
		{
			if (argv[1][i] == 'Z')
				ft_putchar('A');
			else
				ft_putchar(argv[1][i] + 1);
		}
		else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
		{
			if (argv[1][i] == 'z')
				ft_putchar('a');
			else
				ft_putchar(argv[1][i] + 1);
		}
		else
			ft_putchar(argv[1][i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}	
