/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguiter <tguiter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 13:13:35 by tguiter           #+#    #+#             */
/*   Updated: 2015/01/04 16:38:49 by tguiter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	i;
	char	*j;
	int		cmp;

	i = c;
	j = NULL;
	cmp = 0;
	while (s[cmp] != '\0' && j == NULL)
	{
		if (s[cmp] == i)
		{
			j = (char *)(s + cmp);
		}
		cmp++;
	}
	if (s[cmp] == i && j == NULL)
	{
		j = (char *)(s + cmp);
	}
	return (j);
}
