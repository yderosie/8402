/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguiter <tguiter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 14:59:22 by tguiter           #+#    #+#             */
/*   Updated: 2015/01/04 16:38:45 by tguiter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	unsigned int	cmp;
	unsigned int	i;
	size_t			len;
	char			*j;

	cmp = 0;
	i = ft_strlen(s1);
	len = ft_strlen(s2);
	j = s1;
	while (cmp + i <= len + i)
	{
		j[cmp + i] = s2[cmp];
		cmp++;
	}
	j[cmp + i] = '\0';
	return (s1);
}
