/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguiter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 13:28:47 by tguiter           #+#    #+#             */
/*   Updated: 2015/01/04 16:39:46 by tguiter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *s1, const char *s2, size_t n)
{
	char	*i;

	i = s1;
	while (n > 0 && *s2 != '\0')
	{
		*i++ = *s2++;
		--n;
	}
	while (n > 0)
	{
		*i++ = '\0';
		--n;
	}
	return (s1);
}
