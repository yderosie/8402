/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   la_fenetre.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguiter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 17:26:22 by tguiter           #+#    #+#             */
/*   Updated: 2015/02/28 18:20:49 by tguiter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wong.h"
#include <curses.h>

void	catch_value(t_env *env)
{
	getmaxyx(stdscr, env->win.win_y, env->win.win_x);
	env->win.win_y--;
	env->win.win_x--;
	if (WINX(env) < 12 || WINY(env) < 12)
	{
		clear();
		refresh();
		endwin();
//		ft_putsterr("\nElle est trop petite\n");
//		env->infos.echap = 1;
	}
}

void	expose_term(t_env *env)
{
	clear();
	draw_tab(env);
	refresh(	);
}

void	new_window(void)
{
	initscr();
	noecho();
	curs_set(FALSE);
}
