/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   down.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yderosie <yderosie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 15:24:33 by yderosie          #+#    #+#             */
/*   Updated: 2015/03/01 15:24:35 by yderosie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "deplacement.h"

static void		extend_down(t_env *e, t_var *v)
{
	if (e->tab[v->i][v->j] == e->tab[v->i + 1][v->j] && e->tab[v->i][v->j] != 0 && v->c == 0 && v->i + 1 < 4)
	{
		e->tab[v->i + 1][v->j] *= 2;
		e->tab[v->i][v->j] = 0;
		e->all++;
		v->c++;
	}
	if (e->tab[v->i + 1][v->j] == 0 && v->i + 1 < 4)
	{
		e->tab[v->i + 1][v->j] = e->tab[v->i][v->j];
		e->tab[v->i][v->j] = 0;
		e->all++;
	}
	v->i++;
}

void			in_bot(t_env *e)
{
	t_var	v;

	v.i = 3;
	e->all = 0;
	while (v.i > -1)
	{
		v.j = 3;
		while (v.j > -1)
		{
			v.k = v.i;
			v.c = 0;
			while (e->tab[v.i][v.j] != 0)
				extend_down(e, &v);
			v.i = v.k;
			v.j--;
		}
		v.i--;
	}
}
