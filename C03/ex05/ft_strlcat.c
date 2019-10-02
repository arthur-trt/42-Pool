/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/04 20:16:48 by atrouill          #+#    #+#             */
/*   Updated: 2019/08/08 10:08:11 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	strlend;
	unsigned int	strlens;

	strlend = ft_strlen(dest);
	strlens = ft_strlen(src);
	i = 0;
	if (size <= strlend)
		return (strlens + size);
	while (i < size - strlend - 1 && src[i])
	{
		dest[strlend + i] = src[i];
		i++;
	}
	dest[strlend + i] = 0;
	return (strlens + strlend);
}
