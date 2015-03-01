/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   right.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yderosie <yderosie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 15:24:21 by yderosie          #+#    #+#             */
/*   Updated: 2015/03/01 15:24:23 by yderosie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "deplacement.h"

static void		extenf_right(t_env *e, t_var *v)
{
	if (e->tab[v->i][v->j] == e->tab[v->i][v->j + 1] && e->tab[v->i][v->j] != 0
		&& v->c == 0 && v->j + 1 < 4)
	{
		e->tab[v->i][v->j + 1] *= 2;
		e->tab[v->i][v->j] = 0;
		e->all++;
		v->c++;
	}
	if (e->tab[v->i][v->j + 1] == 0 && v->j + 1 < 4)
	{
		e->tab[v->i][v->j + 1] = e->tab[v->i][v->j];
		e->tab[v->i][v->j] = 0;
		e->all++;
	}
	v->j++;
}

void			in_right(t_env *e)
{
	t_var	v;

	v.i = 3;
	e->all = 0;
	while (v.i > -1)
	{
		v.j = 3;
		while (v.j > -1)
		{
			v.k = v.j;
			v.c = 0;
			while (e->tab[v.i][v.j] != 0)
				extenf_right(e, &v);
			v.j = v.k;
			v.j--;
		}
		v.i--;
	}
}