/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguiter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/04 15:49:35 by tguiter           #+#    #+#             */
/*   Updated: 2015/01/04 16:38:07 by tguiter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*st1;
	unsigned char	*st2;

	st1 = (unsigned char*)s1;
	st2 = (unsigned char*)s2;
	while (n > 0)
	{
		if (*st1++ != *st2++)
			return (*--st1 - *--st2);
		n--;
	}
	return (0);
}
