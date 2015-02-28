/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguiter <tguiter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 23:58:32 by tguiter           #+#    #+#             */
/*   Updated: 2015/01/04 16:40:05 by tguiter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*stop;
	unsigned int	cmp;

	if (s == NULL)
	{
		return (NULL);
	}
	stop = ft_strnew(len + 1);
	cmp = 0;
	if (stop == NULL)
	{
		return (NULL);
	}
	while (cmp < len + start)
	{
		if (cmp >= start)
		{
			stop[cmp - start] = s[cmp];
		}
		cmp++;
	}
	return (stop);
}
