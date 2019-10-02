/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 18:02:30 by atrouill          #+#    #+#             */
/*   Updated: 2019/08/21 11:58:48 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	ft_putchar(int fd, char c)
{
	write(fd, &c, 1);
}

int		ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	ft_putstr(int fd, char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar(fd, s[i]);
		i++;
	}
}
