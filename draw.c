/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguiter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 17:06:03 by tguiter           #+#    #+#             */
/*   Updated: 2015/02/28 18:16:09 by tguiter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wong.h"

void	draw_cross(unsigned int x, unsigned int y, unsigned maxx, unsigned	 maxy)
{
	unsigned int tmp;

	tmp = x;
	while (tmp < maxx)
		mvprintw(y, tmp, "."), tmp++;
	while (y < maxy)
		mvprintw(y, maxx / 2, "."), y++;
	while (x < maxx)
		mvprintw(maxy / 2, x, "."), x++;
}

void	draw_tab(t_env *env)
{
	unsigned int x;
	unsigned int y;

	x = 0;
	y = 0;
	while (x < WINX(env))
		mvprintw(y, x, "."), x++;
	while (y < WINY(env))
		mvprintw(y, x, "."), y++;
	while (x > 0)
		mvprintw(y, x, "."), x--;
	while (y > 0)
		mvprintw(y, x, "."), y--;
	draw_cross(0, 0, WINX(env), WINY(env));
	draw_cross(0, (WINY(env) / 2), (WINX(env)), (WINY(env) / 2));
	draw_cross(0, (WINY(env) - WINY(env) / 4), (WINX(env)), (WINY(env) / 2));
	draw_cross(0, 0, (WINX(env) / 2), (WINY(env)));
	draw_cross(0, 0, (WINX(env) / 2) + WINX(env), (WINY(env)));
}

