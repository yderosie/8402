/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguiter <tguiter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 13:08:08 by tguiter           #+#    #+#             */
/*   Updated: 2015/01/04 16:39:38 by tguiter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	s1len;
	size_t	i;

	s1len = ft_strlen(s1);
	i = 0;
	while (i < n && s2[i] != '\0')
	{
		s1[s1len + i] = s2[i];
		i++;
	}
	s1[s1len + i] = '\0';
	return (s1);
}
