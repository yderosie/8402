/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguiter <tguiter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 18:35:09 by tguiter           #+#    #+#             */
/*   Updated: 2015/01/04 16:39:35 by tguiter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;
	int		cmp;
	char	*str;

	if (s == NULL)
	{
		return (NULL);
	}
	if (f == NULL)
	{
		return (ft_strdup(s));
	}
	cmp = 0;
	len = ft_strlen(s);
	str = ft_strnew(len);
	while (cmp < len)
	{
		str[cmp] = (*f)(cmp, s[cmp]);
		cmp++;
	}
	return (str);
}
