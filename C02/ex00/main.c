/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 19:08:41 by atrouill          #+#    #+#             */
/*   Updated: 2019/08/03 16:06:01 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int		main()
{
	char dest[] = "";

	printf("%lu\n", strlen(dest));	
	ft_strcpy(dest, "Super mega test !");
	printf("%s", dest);	
}
