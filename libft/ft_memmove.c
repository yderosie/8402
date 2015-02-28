/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguiter <tguiter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 12:20:03 by tguiter           #+#    #+#             */
/*   Updated: 2015/01/04 16:38:15 by tguiter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	char		*i;
	const char	*j;

	i = s1;
	j = s2;
	if (s1 <= s2)
	{
		return (ft_memcpy(s1, s2, n));
	}
	i += n;
	j += n;
	while (n--)
	{
		*--i = *--j;
	}
	return (s1);
}
