/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   left.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yderosie <yderosie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 15:24:14 by yderosie          #+#    #+#             */
/*   Updated: 2015/03/01 15:24:15 by yderosie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "deplacement.h"

static void		extend_left(t_env *e, t_var *v)
{
	if (e->tab[v->i][v->j] == e->tab[v->i][v->j - 1] && e->tab[v->i][v->j] != 0
		&& v->c == 0 && v->j - 1 > -1)
	{
		e->tab[v->i][v->j - 1] *= 2;
		e->tab[v->i][v->j] = 0;
		e->all++;
		v->c++;
	}
	if (e->tab[v->i][v->j - 1] == 0 && v->j - 1 > -1)
	{
		e->tab[v->i][v->j - 1] = e->tab[v->i][v->j];
		e->tab[v->i][v->j] = 0;
		e->all++;
	}
	v->j--;
}

void			in_left(t_env *e)
{
	t_var	v;

	e->all = 0;
	v.i = 0;
	while (v.i < 4)
	{
		v.j = 0;
		while (v.j < 4)
		{
			v.k = v.j;
			v.c = 0;
			while (e->tab[v.i][v.j] != 0)
			{
				extend_left(e, &v);
			}
			v.j = v.k;
			v.j++;
		}
		v.i++;
	}
}
