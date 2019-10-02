/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 17:37:56 by atrouill          #+#    #+#             */
/*   Updated: 2019/08/18 23:26:50 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int		ft_strlen(char *s)
{
	int l;

	l = 0;
	while (s[l] != 0)
		l++;
	return (l);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	int i;

	i = 0;
	while (s[i] != 0)
	{
		ft_putchar(s[i]);
		i++;
	}
}

void	ft_putstr_alpha(char *str)
{
	int n;

	n = 0;
	while (str[n])
	{
		if ((str[n] >= 'A' && str[n] <= 'Z')
				|| (str[n] >= 'a' && str[n] <= 'z'))
			write(1, &str[n], 1);
		n++;
	}
}

char	*ft_strstr(char *str, char *to_find)
{
	int n;
	int i;
	int s_tf;

	s_tf = 0;
	if (to_find[s_tf] == '\0')
		return (str);
	while (to_find[s_tf])
		s_tf++;
	n = 0;
	while (str[n])
	{
		i = 0;
		if (str[n] == to_find[0])
		{
			while (str[n + i] == to_find[i] && to_find[i])
				i++;
		}
		if (i == s_tf)
			return (&str[n]);
		n++;
	}
	return (0);
}
