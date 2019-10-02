/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 14:52:56 by atrouill          #+#    #+#             */
/*   Updated: 2019/08/06 19:13:45 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int		main(void)
{
//	char str[] = "salut, coMMent tu vas ? 42mots quaRante-deux; cinquante+et+un";

	printf("%s\n", ft_strcapitalize("salut, coMMent tu vas ? 42mots quaRante-deux; cinquante+et+un"));
}
