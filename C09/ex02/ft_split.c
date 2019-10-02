/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 10:19:59 by atrouill          #+#    #+#             */
/*   Updated: 2019/08/21 15:22:00 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_check_sep(char c, char *sep)
{
	int i;

	i = 0;
	while (sep[i])
	{
		if (c == sep[i])
			return (1);
		i++;
	}
	return (0);
}

int		ft_count_words(char *str, char *charset)
{
	int i;
	int count;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && ft_check_sep(str[i], charset))
		{
			if (!str[i + 1])
				return (count);
			i++;
		}
		while (str[i] && !ft_check_sep(str[i], charset))
			i++;
		count++;
	}
	return (count);
}

void	ft_split_helper(char *line, char *str, int i)
{
	int k;

	k = 0;
	while (k < i)
	{
		line[k] = str[k];
		k++;
	}
	line[k] = '\0';
	str += i;
}

char	**ft_split(char *str, char *charset)
{
	char	**range;
	int		count;
	int		i;
	int		j;

	i = 0;
	j = -1;
	count = ft_count_words(str, charset);
	if (!(range = (char **)malloc(sizeof(char*) * (count + 1))))
		return (NULL);
	while (++j < count)
	{
		while (str[i] && ft_check_sep(str[i], charset))
			i++;
		str += i;
		i = 0;
		while (str[i] && !ft_check_sep(str[i], charset))
			i++;
		range[j] = (char *)malloc(sizeof(char **) * (i + 1));
		ft_split_helper(range[j], str, i);
	}
	range[j] = NULL;
	return (range);
}
