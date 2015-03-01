/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_board.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguiter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 12:30:36 by tguiter           #+#    #+#             */
/*   Updated: 2015/03/01 12:31:03 by tguiter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ncurses.h>

void	draw_borders(WINDOW *screen)
{
	int x;
	int y;
	int i;

	getmaxyx(screen, y, x);
	mvwprintw(screen, 0, 0, "+");
	mvwprintw(screen, y - 1, 0, "+");
	mvwprintw(screen, 0, x - 1, "+");
	mvwprintw(screen, y - 1, x - 1, "+");
	i = 1;
	while (i < (y - 1))
	{
		mvwprintw(screen, i, 0, "|");
		mvwprintw(screen, i, x - 1, "|");
		mvwprintw(screen, i, x/4, "|");
		mvwprintw(screen, i, (x/4)*2, "|");
		mvwprintw(screen, i, (x/4)*3, "|");
		i++;
	}
	i = 1;
	while (i < (x - 1))
	{
		mvwprintw(screen, 0, i, "-");
		mvwprintw(screen, y - 1, i, "-");
		mvwprintw(screen, y/4, i, "-");
		mvwprintw(screen, (y/4)*2, i, "-");
		mvwprintw(screen, (y/4)*3, i, "-");
		i++;
	}
}
