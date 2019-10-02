/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_utils.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 02:02:29 by atrouill          #+#    #+#             */
/*   Updated: 2019/08/18 12:32:47 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STR_UTILS_H
# define FT_STR_UTILS_H

# include <unistd.h>

int		ft_strlen(char *s);

void	ft_putchar(char c);

void	ft_putstr(char *s);

char	*ft_strstr(char *str, char *to_find);

void	ft_putstr_alpha(char *str);

#endif