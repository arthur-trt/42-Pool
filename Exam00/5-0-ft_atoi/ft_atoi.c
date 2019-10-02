/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 18:53:28 by exam              #+#    #+#             */
/*   Updated: 2019/08/02 20:31:51 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_char_is_num(char c)
{
	if ((c >= '0' && c <= '9') )
		return (1);
	return (0);
}

int		ft_strlen(const char *str)
{
	int i;

	i = 0;
	if (str[i] == 45)
		i++;
	while (str[i] != '\0' && (ft_char_is_num(str[i]) == 1))
		i++;
	return (i);
}

int		ft_pow_ten(int power)
{
	int i;
	int pow;

	i = 0;
	pow = 1;
	while (i++ < power)
		pow = 10 * pow;
	return (pow);
}

int		ft_is_negative(const char *str)
{
	if (str[0] == 45)
		if (ft_char_is_num(str[10]) == 1 && str[10] == 56)
			return (-2147483648);
		else
			return (1);
	else
		return (0);
}

int		ft_atoi(const char *str)
{
	int i;
	int digits;
	int result;
	int neg;

	i = 0;
	result = 0;
	neg = 0;
	if (ft_is_negative(str) == -2147483648)
		return (-2147483648);
	if (ft_is_negative(str) == 1)
	{
		neg = 1;
		i++;
	}		
	digits = ft_strlen(str) - (i + 1);
	while (str[i] != '\0' && (ft_char_is_num(str[i]) == 1))
	{
		result = result + ((str[i] - '0') * ft_pow_ten(digits));
		i++;
		digits--;
	}
	if (neg == 1)
		return (-1 * result);
	return (result);
}
