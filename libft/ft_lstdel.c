/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguiter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/04 16:24:10 by tguiter           #+#    #+#             */
/*   Updated: 2015/01/04 16:37:39 by tguiter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	if (alst && del)
	{
		while (*alst)
		{
			del((*alst)->content, (*alst)->content_size);
			free(*alst);
			*alst = (*alst)->next;
		}
		*alst = NULL;
	}
}
