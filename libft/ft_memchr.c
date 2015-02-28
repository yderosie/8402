/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguiter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/04 15:48:09 by tguiter           #+#    #+#             */
/*   Updated: 2015/01/04 16:38:05 by tguiter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char		*r;

	r = (char *)s;
	if (!r)
		return (NULL);
	while (n > 0)
	{
		if (*r == (char)c)
			return (r);
		r++;
		n--;
	}
	return (NULL);
}
