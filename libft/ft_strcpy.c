/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguiter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 13:04:47 by tguiter           #+#    #+#             */
/*   Updated: 2015/01/04 16:38:58 by tguiter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *s1, const char *s2)
{
	size_t			len;
	unsigned int	cmp;
	char			*i;

	len = ft_strlen(s2);
	i = s1;
	cmp = 0;
	while (cmp <= len)
	{
		i[cmp] = s2[cmp];
		cmp++;
	}
	return (s1);
}
