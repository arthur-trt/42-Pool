/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 19:56:15 by atrouill          #+#    #+#             */
/*   Updated: 2019/08/22 19:56:51 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int croiss;

	i = 0;
	croiss = 0;
	if (length <= 1)
		return (1);
	while ((*f)(tab[i], tab[i + 1]) == 0)
		i++;
	if ((*f)(tab[i], tab[i + 1]) < 0)
		croiss = 1;
	else
		croiss = 0;
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) < 0 && croiss == 0)
			return (0);
		if ((*f)(tab[i], tab[i + 1]) > 0 && croiss == 1)
			return (0);
		i++;
	}
	return (1);
}
