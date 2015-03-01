/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deplacement.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yderosie <yderosie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 09:38:01 by yderosie          #+#    #+#             */
/*   Updated: 2015/02/28 09:38:02 by yderosie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "deplacement.h"

static void	ft_test(t_env *e)
{
	int		i;
	int		j;

	i = 0;
	while (i != 4)
	{
		j = 0;
		while (j != 4)
		{
			e->tab[i][j++] = 0;
		}
		i++;
	}
}

static int	verif(t_env *e)
{
	int		i;
	int		j;
	int 	k;

	k = 0;
	i = 0;
	while (i != 4)
	{
		j = 0;
		while (j != 4)
		{
			if (e->tab[i][j++] != 0)
				k++;
		}
		i++;
	}
	if (k == 16)
		return (1);
	else
		return (0);
}

void	ft_random(t_env *e)
{
	int m;
	int i;
	int l;

	m = rand() % (0 - 2);
	if (m == 0)
		m = 2;
	if (m == 1)
		m = 4;
	i = rand() % (0 - 16);
	l = i / 4;
	i = i % 4;
	if (e->tab[l][i] == 0)
		e->tab[l][i] = m;
	else if (verif(e) == 0)
		ft_random(e);
}

int		main(void)
{
	t_env	e;
	int		j;
	int		k;
	int		n;
	int		o;

	initscr();
	ft_test(&e);
	keypad(stdscr, TRUE);
	srand(time(NULL));
	n = 0;
	e.all = 0;
	while (n < 2)
	{
		ft_random(&e);
		n++;
	}
	while (1)
	{
		o = getch();
		if (KEY_DOWN == o)
		{
			in_bot(&e);
			if (e.all > 0)
				ft_random(&e);
		}
		if (KEY_UP == o)
		{
			in_top(&e);
			if (e.all > 0)
				ft_random(&e);
		}
		if (KEY_LEFT == o)
		{
			in_left(&e);
			if (e.all > 0)
				ft_random(&e);
		}
		if (KEY_RIGHT == o)
		{
			in_right(&e);
			if (e.all > 0)
				ft_random(&e);
		}
		if (o != 0)
		{
			clear();
			k = 0;
			while (k != 4)
			{
				j = 0;
				while (j != 4)
				{
					printw("%d    ", e.tab[k][j]);
					j++;
				}
				printw("\n");
			k++;
			}
			refresh();
			o = 0;
		}
		printw("\n");
		refresh();
	}
	getch();
	endwin();
	return (0);
}
