/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguiter <tguiter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 00:30:16 by tguiter           #+#    #+#             */
/*   Updated: 2015/01/04 16:45:23 by tguiter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int				i;
	int				j;
	unsigned int	k;
	char			*l;

	i = 0;
	k = 0;
	j = 0;
	l = ft_strnew (ft_strlen (s));
	while (k < ft_strlen(s))
	{
		if (!j && ft_isblank (s[k]))
			k++;
		else
		{
			j = 1;
			l[i++] = s[k++];
		}
	}
	while (ft_isblank(l[--i]))
	{
		l[i] = '\0';
	}
	return (l);
}
