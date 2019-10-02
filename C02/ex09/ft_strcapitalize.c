/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 14:53:19 by atrouill          #+#    #+#             */
/*   Updated: 2019/08/03 10:16:31 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_charupcase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

char	ft_charlowcase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

char	ft_charisalpha(char c)
{
	if (!((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')))
		if (c < '0' || c > '9')
			return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	unsigned int i;

	i = 0;
	if (str[i] != '\0')
		str[i] = ft_charupcase(str[i]);
	while (str[++i] != '\0')
	{
		if (!ft_charisalpha(str[i - 1]) && ft_charisalpha(str[i]))
			str[i] = ft_charupcase(str[i]);
		else
			str[i] = ft_charlowcase(str[i]);
	}
	return (str);
}
