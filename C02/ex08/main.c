/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 13:23:13 by atrouill          #+#    #+#             */
/*   Updated: 2019/08/02 14:52:12 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str);

int		main(void)
{
	char str[] = "MesCouidlls au b0rd de l0$%^";

	printf("%s\n", ft_strlowcase(str));
	//printf("%s\n", ft_strlowcase("ajsfoiajSHSHFUDFUcjzojdfijsd15568s4df?"));
	//printf("%s\n", ft_strlowcase("JNDVDHVDUFIVDUFVIODVNXZNVNDB"));
	//printf("%s\n", ft_strlowcase("5116468615168135132100"));
	//printf("%s\n", ft_strlowcase("%^*&*()%$#$%^&*(*(&*(&^%*&$^%$%)))"));
}
