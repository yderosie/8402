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

# include "deplacement.h"

void	ft_test(t_env *e)
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

void	in_right(t_env *e)
{
	int 	i;
	int 	j;
	int 	k;
	int 	c;

	i = 3;
	while (i > -1)
	{
		j = 3;
		while (j > -1)
		{
			k = j;
			c = 0;
			while (e->tab[i][j] != 0)
			{
				
				if (e->tab[i][j] == e->tab[i][j + 1] && e->tab[i][j] != 0 && c == 0 && j + 1 < 4)
				{
					e->tab[i][j + 1] *= 2;
					e->tab[i][j] = 0;
					c++;
				}
				if (e->tab[i][j + 1] == 0 && j + 1 < 4)
				{
					e->tab[i][j + 1] = e->tab[i][j];
					e->tab[i][j] = 0;
				}
				j++;
			}
			j = k;
			j--;
		}
		i--;
	}
}

void	in_bot(t_env *e)
{
	int 	i;
	int 	j;
	int 	k;

	i = 3;
	while (i > -1)
	{
		j = 3;
		while (j > -1)
		{
			k = i;
			while (e->tab[i][j] != 0)
			{
				if (e->tab[i][j] == e->tab[i + 1][j] && e->tab[i][j] != 0 && i + 1 < 4)
				{
					e->tab[i + 1][j] *= 2;
					e->tab[i][j] = 0;
				}
				if (e->tab[i + 1][j] == 0 && i + 1 < 4)
				{
					e->tab[i + 1][j] = e->tab[i][j];
					e->tab[i][j] = 0;
				}
				i++;
			}
			i = k;
			j--;
		}
		i--;
	}
}

void	in_top(t_env *e)
{
	int 	i;
	int 	j;
	int 	k;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{	
			k = i;
			while (e->tab[i][j] != 0)
			{
				if (e->tab[i][j] == e->tab[i - 1][j] && e->tab[i][j] != 0 && i - 1 > -1)
				{
					e->tab[i - 1][j] *= 2;
					e->tab[i][j] = 0;
				}
				if (e->tab[i - 1][j] == 0 && i - 1 > -1)
				{
					e->tab[i - 1][j] = e->tab[i][j];
					e->tab[i][j] = 0;
				}
				i--;
			}
			i = k;
			j++;
		}
		i++;
	}
}

void	in_left(t_env *e)
{
	int 	i;
	int 	j;
	int 	k;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{	
			k = j;
			while (e->tab[i][j] != 0)
			{
				if (e->tab[i][j] == e->tab[i][j - 1] && e->tab[i][j] != 0 && j - 1 > -1)
				{
					e->tab[i][j - 1] *= 2;
					e->tab[i][j] = 0;
				}
				if (e->tab[i][j - 1] == 0 && j - 1 > -1)
				{
					e->tab[i][j - 1] = e->tab[i][j];
					e->tab[i][j] = 0;
				}
				j--;
			}
			j = k;
			j++;
		}
		i++;
	}
}

void	verif(t_env *e)

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
	else
		ft_random(e);
}

int		main(void)
{
	t_env	e;
	int		i;
	int		j;
	int		k;
	int		l;
	int		m;
	int		n;
	int		o;

	initscr();
	ft_test(&e);
	keypad(stdscr, TRUE);
	srand(time(NULL));
	n = 0;
	while (n < 2)
	{
		ft_random(&e);
		n++;
	}
	while (1)
	{
		i = 0;
		m = 0;
		l = 0;
		o = getch();
		if (KEY_DOWN == o)
		{
			in_bot(&e);
			m = rand() % (0 - 2);
			if (m == 0)
				m = 2;
			if (m == 1)
				m = 4;
			i = rand() % (0 - 16);
			l = i / 4;
			i = i % 4;
			if (e.tab[l][i] == 0)
				e.tab[l][i] = m;
			else
				ft_random(&e);
		}
		if (KEY_UP == o)
		{
			in_top(&e);
			m = rand() % (0 - 2);
			if (m == 0)
				m = 2;
			if (m == 1)
				m = 4;
			i = rand() % (0 - 16);
			l = i / 4;
			i = i % 4;
			if (e.tab[l][i] == 0)
				e.tab[l][i] = m;
			else
				ft_random(&e);
		}
		if (KEY_LEFT == o)
		{
			in_left(&e);
			m = rand() % (0 - 2);
			if (m == 0)
				m = 2;
			if (m == 1)
				m = 4;
			i = rand() % (0 - 16);
			l = i / 4;
			i = i % 4;
			if (e.tab[l][i] == 0)
				e.tab[l][i] = m;
			else
				ft_random(&e);
		}
		if (KEY_RIGHT == o)
		{
			in_right(&e);
			m = rand() % (0 - 2);
			if (m == 0)
				m = 2;
			if (m == 1)
				m = 4;
			i = rand() % (0 - 16);
			l = i / 4;
			i = i % 4;
			if (e.tab[l][i] == 0)
				e.tab[l][i] = m;
			else
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
