/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguiter <tguiter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 13:22:37 by tguiter           #+#    #+#             */
/*   Updated: 2015/01/04 16:39:57 by tguiter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	i;
	char	*j;
	int		cmp;

	i = c;
	j = NULL;
	cmp = 0;
	while (s[cmp] != '\0')
	{
		if (s[cmp] == i)
		{
			j = (char *)(s + cmp);
		}
		cmp++;
	}
	if (s[cmp] == i)
	{
		j = (char *)(s + cmp);
	}
	return (j);
}
