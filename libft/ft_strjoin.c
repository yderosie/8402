/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguiter <tguiter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 00:16:14 by tguiter           #+#    #+#             */
/*   Updated: 2015/01/04 16:39:18 by tguiter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		len;
	int		cmp;
	char	*dest;

	if (s1 == NULL && s2 == NULL)
		return ((char *)NULL);
	if (s1 == NULL && s2)
		return (ft_strdup(s2));
	if (s2 == NULL && s1)
		return (ft_strdup(s1));
	cmp = 0;
	len = ft_strlen(s1);
	i = len + ft_strlen(s2) + 1;
	if (!(dest = ft_strnew(i)))
		return (NULL);
	while (cmp < i)
	{
		if (cmp < len)
			dest[cmp] = s1[cmp];
		else
			dest[cmp] = s2[cmp - len];
		cmp++;
	}
	return (dest);
}
