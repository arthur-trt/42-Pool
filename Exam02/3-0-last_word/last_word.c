/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 18:34:13 by exam              #+#    #+#             */
/*   Updated: 2019/08/16 18:55:39 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_clean(char *str)
{
	int size;
	int i;

	size = ft_strlen(str);
	i = size - 1;
	while ((str[i] == ' ' || str[i] == '\t') && i > 0)
		i--;
	str[i + 1] = '\0';
	return (str);
}

int		ft_last_word(char *str)
{
	int i;
	int size;
	
	size = ft_strlen(str);
	i = size - 1;
	while (str[i] != '\0' && str[i] != '\t' && str[i] != ' ')
		i--;
	return (i);
}

int main(int argc, char *argv[])
{
	char *cleaned;
	int i;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	cleaned = ft_clean(argv[1]);
	i = ft_last_word(cleaned) + 1;
	while (cleaned[i] != '\0')
	{
		ft_putchar(cleaned[i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}
