/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguiter <tguiter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/16 18:47:45 by tguiter           #+#    #+#             */
/*   Updated: 2015/01/04 16:39:21 by tguiter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*i;
	char	*j;
	size_t	len;

	i = (char *)ft_memchr(dst, '\0', size);
	if (i == NULL)
	{
		return (size + ft_strlen(src));
	}
	j = (char *)src;
	len = (size_t)(i - dst) + ft_strlen(j);
	while ((size_t)(i - dst) < size - 1 && *j != '\0')
	{
		*i = *j;
		i++;
		j++;
	}
	*i = '\0';
	return (len);
}
