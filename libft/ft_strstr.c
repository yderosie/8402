/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguiter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/04 16:45:41 by tguiter           #+#    #+#             */
/*   Updated: 2015/01/04 16:45:45 by tguiter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	const char	*r;
	const char	*st2;
	const char	*st1;

	if (!*s2)
		return ((char*)s1);
	st2 = s2;
	while (*s1)
	{
		r = s1;
		st1 = s1;
		while (*st1 == *s2)
		{
			st1++;
			s2++;
			if (*s2 == '\0')
				return ((char*)r);
		}
		s1++;
		s2 = st2;
	}
	return (NULL);
}
