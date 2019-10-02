/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verifs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/11 14:04:45 by atrouill          #+#    #+#             */
/*   Updated: 2019/08/11 14:09:37 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_verif_row(int **map, int row, int num, int size)
{
	int col;
   
	col	= 0;
	while (col < size)
	{
		if (map[row][col] == num)
			return (1);
		col++;
	}
	return (0);
}

int		ft_verif_col(int **map, int col, int num, int size)
{
	int row;
   
	row	= 0;
	while (row < size)
	{
		if (map[row][col] == num)
			return (1);
		row++;
	}
	return (0);
}
