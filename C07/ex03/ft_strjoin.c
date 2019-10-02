/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 13:34:37 by atrouill          #+#    #+#             */
/*   Updated: 2019/08/20 02:38:54 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include <stdlib.h>

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned long int	ft_len_all(int size, char **strs, char *sep)
{
	int					i;
	int					j;
	unsigned long int	result;

	i = 0;
	j = 0;
	result = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			result++;
			j++;
		}
		i++;
	}
	result = result + ((size - 1) * ft_strlen(sep));
	return (result);
}

char				*ft_strcat(char *dest, char *src)
{
	int					len;
	int					i;

	i = 0;
	len = 0;
	while (dest[len] != '\0')
		len++;
	while (src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}

char				*ft_strjoin(int size, char **strs, char *sep)
{
	char				*res;
	int					i;
	unsigned long int	nb_char;

	i = 0;
	if (size <= 0)
	{
		res = malloc(sizeof(*res));
		res[0] = '\0';
		return (res);
	}
	nb_char = ft_len_all(size, strs, sep);
	res = malloc(sizeof(*res) * (nb_char + 1));
	res[0] = '\0';
	while (i < size)
	{
		res = ft_strcat(res, strs[i]);
		if (i < size - 1)
			res = ft_strcat(res, sep);
		i++;
	}
	res[nb_char] = '\0';
	return (res);
}
