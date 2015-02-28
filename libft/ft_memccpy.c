/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguiter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 15:43:27 by tguiter           #+#    #+#             */
/*   Updated: 2015/01/04 16:38:02 by tguiter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	char		*i;
	const char	*j;

	i = s1;
	j = s2;
	while (n--)
	{
		if (*j == c)
		{
			*i++ = *j++;
			return (i);
		}
		*i++ = *j++;
	}
	return (NULL);
}
