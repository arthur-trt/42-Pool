/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 12:26:35 by atrouill          #+#    #+#             */
/*   Updated: 2019/08/21 19:06:35 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# define OUT STDOUT_FILENO
# define ERR STDERR_FILENO

# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>

/*
** ft_utils.c
*/

void	ft_putchar(int fd, char c);
void	ft_putstr(int fd, char *s);

/*
** ft_display_file.c
*/

int		ft_display_file(char *file_name);

#endif
