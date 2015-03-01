/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deplacement.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yderosie <yderosie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 10:17:20 by yderosie          #+#    #+#             */
/*   Updated: 2015/02/28 10:17:21 by yderosie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEPLACEMENT_H

# define DEPLACEMENT_H

# include <stdlib.h>
# include <time.h>
# include <curses.h>
# include <unistd.h>
# include <string.h>
# include <stdio.h>

enum e_const
{
	ESCAPE = 27,
	WIN_VALEUR = 2048
};

typedef struct	s_var
{
	int i;
	int j;
	int k;
	int c;
}				t_var;

typedef struct	s_env
{
	int		tab[4][4];
	int		all;
	int 	o;
}				t_env;

void	ft_random(t_env *e);
void	in_bot(t_env *e);
void	in_right(t_env *e);
void	in_left(t_env *e);
void	in_top(t_env *e);

#endif

