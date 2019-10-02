/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 23:50:49 by atrouill          #+#    #+#             */
/*   Updated: 2019/08/05 22:57:46 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_hex(int n)
{
	char *hex;

	hex = "0123456789abcdef";
	if (n >= 16)
		ft_putchar(hex[n / 16]);
	else
		ft_putchar('0');
	ft_putchar(hex[n % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] != 127)
			ft_putchar(str[i]);
		else if (str[i] < 0)
		{
			ft_putchar('\\');
			ft_print_hex((unsigned char)str[i]);
		}
		else
		{
			ft_putchar('\\');
			ft_print_hex(str[i]);
		}
		i++;
	}
}
