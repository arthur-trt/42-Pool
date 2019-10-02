/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 14:36:36 by atrouill          #+#    #+#             */
/*   Updated: 2019/08/22 15:29:10 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# define ADD 1
# define SUB 2
# define MULT 3
# define DIV 4
# define MOD 5

# include <unistd.h>

/*
** ft_utils.c
*/

void	ft_putchar(char c);
void	ft_putstr(char *s);
int		ft_strlen(char *s);

/*
** ft_atoi.c
*/

int		ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_clean_str(char *str, int *neg);
int		ft_atoi(char *str);

/*
** ft_putnbr.c
*/

void	ft_putnbr(int nb);

/*
** ft_op.c
*/

int		ft_add(int a, int b);
int		ft_sub(int a, int b);
int		ft_mult(int a, int b);
int		ft_div(int a, int b);
int		ft_mod(int a, int b);

/*
** ft_do_op.c
*/

int		ft_do_op(char **params);
int		ft_check_sign(char c);

#endif
