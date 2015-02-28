/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguiter <tguiter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 17:00:46 by tguiter           #+#    #+#             */
/*   Updated: 2015/01/04 16:39:12 by tguiter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	int		cmp;
	int		len;

	if (s != NULL && f != NULL)
	{
		len = ft_strlen(s);
		cmp = 0;
		while (cmp < len)
		{
			(*f)(s);
			s++;
			cmp++;
		}
	}
}
