/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 22:52:46 by atrouill          #+#    #+#             */
/*   Updated: 2019/08/05 19:26:58 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char src[] = "Bonjour";
	char dest[15];

	printf("%s\n", ft_strncpy(dest, src, 15 ));
	printf("%s\n", strncpy(dest, src, 15 ));
}
