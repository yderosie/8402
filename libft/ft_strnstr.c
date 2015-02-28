/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguiter <tguiter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 13:25:49 by tguiter           #+#    #+#             */
/*   Updated: 2015/01/04 16:39:53 by tguiter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char	c;
	char	i;
	size_t	len;
	int		j;

	j = 0;
	if ((c = *s2++) != '\0')
	{
		len = ft_strlen(s2);
		while (!j || ft_strncmp(s1, s2, len) != 0)
		{
			j = 1;
			if ((i = *s1++) == '\0' || n-- < 1)
				return (NULL);
			while (i != c)
			{
				if ((i = *s1++) == '\0' || n-- < 1)
					return (NULL);
			}
			if (len > n)
				return (NULL);
		}
		s1--;
	}
	return ((char *)s1);
}
