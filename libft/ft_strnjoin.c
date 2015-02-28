/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguiter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 17:37:57 by tguiter           #+#    #+#             */
/*   Updated: 2015/01/06 17:52:41 by tguiter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnjoin(char const *s1, char const *s2, size_t s2len)
{
	int			i;
	size_t		j;
	int			len;
	char		*str;

	i = 0;
	j = 0;
	len = (ft_strlen(s1) + s2len);
	if ((str = (char *)malloc(sizeof(char) * (len + 1))))
	{
		while (s1[i] != '\0')
		{
			str[i] = s1[i];
			i++;
		}
		while (s2[j] != '\0' && j < s2len)
		{
			str[i] = s2[j];
			i++;
			j++;
		}
		str[i] = '\0';
		return (str);
	}
	return (NULL);
}
