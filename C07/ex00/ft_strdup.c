/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 10:14:19 by atrouill          #+#    #+#             */
/*   Updated: 2019/08/15 10:41:55 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		src_len;
	int		i;
	char	*dest;
	
	src_len = ft_strlen(src);
	i = 0;
	if(!(dest = malloc(sizeof(*dest) * (src_len + 1))))
		return (NULL);
	while (i <= src_len)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
