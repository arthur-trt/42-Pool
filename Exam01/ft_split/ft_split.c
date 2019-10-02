/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 19:06:10 by exam              #+#    #+#             */
/*   Updated: 2019/08/09 20:48:45 by exam             ###   ########.fr       */
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

int		ft_word_count(char *str)
{
	int i;
	int count;

	if(sizeof(str) == 0 || str[0] == 0)
		return (0);

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			count++;
			if (str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\n' || str[i + 1] == '\0')
			{
				count--;
			}
		}
		i++;
	}
	return (count + 1);
}

char	**ft_split(char *str)
{
	char **tab;
	int word_count;
	int i;
	int j;
	int k;

	if(sizeof(str) == 0 || str[0] == 0)
		return (NULL);

	word_count = ft_word_count(str);
	tab = malloc(sizeof(char) * word_count * ft_strlen(str));
	i = 0;
	while (i < word_count)
	{
		tab[i] = malloc(sizeof(char) * ft_strlen(str));
		i++;
	}

	j = 0;
	i = 0;
	while (str[j] != '\0')
	{
		k = 0;
		while (!(str[j] == ' ' || str[j] == '\t' || str[j] == '\n') && str[j] != '\0')
		{
			tab[i][k] = str[j];
			j++;
			k++;
		}
		while (str[j] == ' ' || str[j] == '\t' || str[j] == '\n' || str[j + 1] == '\0')
			j++;
		tab[i][k + 1] = '\0';
		i++;
	}
	return tab;
}
