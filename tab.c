/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguiter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 17:23:44 by tguiter           #+#    #+#             */
/*   Updated: 2015/02/28 18:13:04 by tguiter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wong.h"

void	init_tab(t_env *env)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			CASEV(x, y) = 0;
			CASEX(x, y) = ((x + 1) * (WINX(env) / 8));
			printf("%d\n", CASEX(x, y));
			CASEY(x, y) = ((y + 1) * (WINY(env) / 8));
			CASEC(x, y) = 0;
			mvprintw(CASEY(x, y), CASEX(x, y), "0");
			refresh();
			x++;
		}
		refresh();
		sleep(1);
		y++;
	}
}

int		main(void)
{
	t_env	env;
	enum	WIN_VALUE;

	env.def = WIN_VALUE;
	new_window();
	clear();
	catch_value(&env);
	init_tab(&env);
	return (0);
}
