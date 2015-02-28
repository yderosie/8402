/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpushback.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguiter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/04 14:19:59 by tguiter           #+#    #+#             */
/*   Updated: 2015/01/04 16:37:56 by tguiter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstpushback(t_list **begin_list, t_list *new)
{
	t_list *string;

	string = *begin_list;
	if (*begin_list)
	{
		while (string->next)
			string = string->next;
		string->next = new;
	}
	else
		*begin_list = new;
}
