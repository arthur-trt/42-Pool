/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 11:59:26 by atrouill          #+#    #+#             */
/*   Updated: 2019/08/12 11:18:48 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_base(char *s)
{
	int j;
	int k;

	j = 0;
	while (s[j] != '\0')
		j++;
	if (j <= 1)
		return (0);
	j = 0;
	while (s[j])
	{
		if (s[j] == '\r' || s[j] == '\t' || s[j] == '\v' || s[j] == '\n'
				|| s[j] == '\f' || s[j] == ' ')
			return (0);
		k = j;
		while (s[++k] != '\0')
			if (s[k] == s[j])
				return (0);
		if (s[j] == '+' || s[j] == '-')
			return (0);
		j++;
	}
	return (1);
}

char	*ft_clean_str(char *s, int *neg)
{
	*neg = 1;
	while (*s == '\r' || *s == '\t' || *s == '\v' || *s == '\n'
			|| *s == '\f' || *s == ' ')
		s++;
	while (*s == '-' || *s == '+')
	{
		if (*s == '-')
			*neg = *neg * -1;
		s++;
	}
	return (s);
}

int		ft_pow(int num, int power)
{
	int res;
	int i;

	i = 0;
	res = 1;
	while (i < power)
	{
		res = res * num;
		i++;
	}
	return (res);
}

int		ft_check_index(char *base, char *str, int pos)
{
	int index;
	int str_len;
	int base_len;

	str_len = 0;
	base_len = 0;
	index = 0;
	while (str[pos] != base[index] && base[index] != '\0')
		index++;
	if (base[index] == '\0')
		return (-1);
	while (str[str_len] != '\0')
		str_len++;
	while (base[base_len] != '\0')
		base_len++;
	return (index * ft_pow(base_len, (str_len - pos - 1)));
}

int		ft_atoi_base(char *str, char *base)
{
	int	neg;
	int	res;
	int	i;

	i = 0;
	res = 0;
	if (ft_check_base(base))
	{
		str = ft_clean_str(str, &neg);
		while (str[i])
		{
			if (ft_check_index(base, str, i) == -1)
				return (0);
			else
				res = res + ft_check_index(base, str, i);
			i++;
		}
		return (res * neg);
	}
	return (0);
}
