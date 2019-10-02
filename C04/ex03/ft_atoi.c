/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 23:55:02 by atrouill          #+#    #+#             */
/*   Updated: 2019/08/06 15:19:43 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while ((n != 0) && ((*s1 == *s2) && *s1))
	{
		s1++;
		s2++;
		n--;
	}
	return (*s1 - *s2);
}

char			*ft_clean_str(char *str, int *neg)
{
	int i;

	i = 0;
	*neg = 1;
	while (*str == '\t' || *str == '\n' || *str == '\v' || *str == '\f' ||
			*str == '\r' || *str == ' ')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			i++;
		str++;
	}
	if (i % 2 != 0)
		*neg = -1;
	return (str);
}

int				ft_atoi(char *str)
{
	int		neg;
	int		res;
	char	*str_cleaned;

	res = 0;
	str_cleaned = ft_clean_str(str, &neg);
	if (ft_strncmp(str_cleaned, "2147483648", 11) == 0)
		return (-2147483648);
	while (*str_cleaned && (*str_cleaned >= '0' && *str_cleaned <= '9'))
	{
		res = res * 10 + (*str_cleaned - 48);
		str_cleaned++;
	}
	return (res * neg);
}
