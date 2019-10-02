/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 13:23:13 by atrouill          #+#    #+#             */
/*   Updated: 2019/08/02 13:42:21 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str);

int		main(void)
{
	char str[] = "MesCouidlls au b0rd de l0$%^";

	printf("%s\n", ft_strupcase(str));
	//printf("%s\n", ft_strupcase("ajsfoiajSHSHFUDFUcjzojdfijsd15568s4df?"));
	//printf("%s\n", ft_strupcase("JNDVDHVDUFIVDUFVIODVNXZNVNDB"));
	//printf("%s\n", ft_strupcase("5116468615168135132100"));
	//printf("%s\n", ft_strupcase("%^*&*()%$#$%^&*(*(&*(&^%*&$^%$%)))"));
}
