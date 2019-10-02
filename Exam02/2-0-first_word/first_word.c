/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 18:12:51 by exam              #+#    #+#             */
/*   Updated: 2019/08/16 18:30:59 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_clean(char *str)
{
	while ((*str == ' ' || *str == '\t') && *str != '\0')
		str++;
	return (str);
}

int		ft_first_word(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\0' && str[i] != '\t' && str[i] != ' ')
		i++;
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
	i = 0;
	cleaned = ft_clean(argv[1]);
	while (i < ft_first_word(cleaned))
	{
		ft_putchar(cleaned[i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}
