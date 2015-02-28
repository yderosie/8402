/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguiter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/04 14:19:50 by tguiter           #+#    #+#             */
/*   Updated: 2015/01/04 16:37:50 by tguiter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;
	t_list *tmp;

	new = NULL;
	tmp = NULL;
	while (lst)
	{
		tmp = ft_lstnew(lst->content, lst->content_size);
		if (tmp == NULL)
			return (NULL);
		ft_lstpushback(&new, f(tmp));
		lst = lst->next;
	}
	return (new);
}
