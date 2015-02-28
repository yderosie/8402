/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguiter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/04 14:01:52 by tguiter           #+#    #+#             */
/*   Updated: 2015/01/04 16:37:35 by tguiter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_neg_n_zero(int *n, int *neg, char **str, int type)
{
	if (type == 1)
	{
		if (*n < 0)
		{
			*n *= -1;
			*neg = 1;
		}
		else
			*neg = 0;
	}
	else
	{
		*str = ft_strnew(1);
		if (*str == NULL)
			return (NULL);
		*str[0] = '0';
		return (*str);
	}
	return (NULL);
}

static char	*ft_int(int n)
{
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 2147483647)
		return (ft_strdup("2147483647"));
	return (NULL);
}

static void	ft_div(int *div, int *n, int *i)
{
	*div = 1;
	*i = 0;
	while (*div <= *n)
	{
		*div *= 10;
		*i += 1;
	}
	*div /= 10;
}

static void	ft_negsign(int *neg, char **str, int *i)
{
	if (*neg == 1)
		*str[0] = '-';
	*i = *neg;
}

char		*ft_itoa(int n)
{
	char	*str;
	int		div;
	int		i;
	int		taille;
	int		neg;

	if (n == -2147483648 || n == 2147483647)
		return (ft_int(n));
	if (n == 0)
		return (ft_neg_n_zero(&n, &neg, &str, 0));
	ft_neg_n_zero(&n, &neg, &str, 1);
	ft_div(&div, &n, &i);
	taille = i + neg;
	str = ft_strnew(taille);
	if (str == NULL)
		return (NULL);
	ft_negsign(&neg, &str, &i);
	while (i < taille)
	{
		str[i] = n / div + 48;
		n -= (n / div) * div;
		div /= 10;
		i++;
	}
	return (str);
}
