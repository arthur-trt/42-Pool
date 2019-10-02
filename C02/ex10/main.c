/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 23:13:37 by atrouill          #+#    #+#             */
/*   Updated: 2019/08/02 23:46:59 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
unsigned int ft_strlen(char *str);

int		main(void)
{
	unsigned int	size = 10;	
	char			src[] = "Ceci est une chaine de test";
	char			dest[size];

	printf("Src : %s\n", src);
	ft_strlcpy(dest, src, size);
	printf("Dst : %s\n", dest);
				
}
