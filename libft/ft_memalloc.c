/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguiter <tguiter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 16:31:15 by tguiter           #+#    #+#             */
/*   Updated: 2015/01/04 16:37:58 by tguiter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char		*j;
	unsigned	cmp;

	cmp = 0;
	j = (char *)malloc(size);
	if (j != NULL)
	{
		while (cmp++ < size)
			*j++ = 0;
	}
	return (j);
}
