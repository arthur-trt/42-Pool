/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dait-atm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 10:43:53 by dait-atm          #+#    #+#             */
/*   Updated: 2019/08/04 17:27:00 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	line(char beg, char mid, char end, int size)
{
	int w;

	w = 1;
	ft_putchar(beg);
	while (w < size - 1)
	{
		ft_putchar(mid);
		w++;
	}
	if (w != size)
	{
		ft_putchar(end);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int		h;

	h = 1;
	if (x > 0 && y > 0)
	{
		line('A', 'B', 'C', x);
		while (h < y - 1)
		{
			line('B', ' ', 'B', x);
			h++;
		}
		if (h != y)
			line('C', 'B', 'A', x);
	}
	else
		ft_putchar('\n');
}
