/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 18:01:45 by atrouill          #+#    #+#             */
/*   Updated: 2019/08/21 13:15:13 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

/*
** Define somes consts
*/

# define OUT STDOUT_FILENO
# define ERR STDERR_FILENO
# define IN STDIN_FILENO
# define _EOF 0

/*
**	Include needed
*/

# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <errno.h>

/*
** Struct and typedef
*/

typedef struct	s_params
{
	int		error;
	int		offset;
	int		start_arg_file;
}				t_params;

/*
** ft_check_args.c
*/

int				ft_check_args(t_params *res, int argc, char **argv);
void			ft_check_offset(t_params *params, char *str, int start);

/*
** ft_file_size.c
*/

int				ft_file_size(char *filename, int *size);

/*
** ft_tail.c
*/

int				ft_tail_stdout(char *filename, int offset);
int				ft_tail_stdin(void);

/*
** ft_utils.c
*/

void			ft_putchar(int fd, char c);
void			ft_putstr(int fd, char *s);
int				ft_strlen(char *s);

#endif
