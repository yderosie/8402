/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguiter <tguiter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 17:08:19 by tguiter           #+#    #+#             */
/*   Updated: 2015/01/04 16:39:14 by tguiter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int		cmp;
	int		len;

	if (s != NULL && f != NULL)
	{
		len = ft_strlen(s);
		cmp = 0;
		while (cmp < len)
		{
			(*f)(cmp, s);
			s++;
			cmp++;
		}
	}
}
