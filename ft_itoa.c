/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumercha <hello@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 14:56:32 by lumercha          #+#    #+#             */
/*   Updated: 2026/01/15 11:08:37 by lumercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_size(int n)
{
	size_t	i;

	i = 0;
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char	*main_logic(char *res, int n, int sign)
{
	size_t	size;
	size_t	aux;

	size = ft_size(n) + sign;
	aux = size;
	res = malloc(sizeof(char) * (size + 1));
	if (!res)
		return (NULL);
	while (n > 0)
	{
		res[--aux] = (n % 10) + '0';
		n /= 10;
	}
	if (sign == 1)
		res[0] = '-';
	res[size] = 0;
	return (res);
}

char	*ft_itoa(int n)
{
	int		sign;
	char	*res;

	sign = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	else if (n == 0)
		return (ft_strdup("0"));
	if (n < 0)
	{
		sign = 1;
		n *= -1;
	}
	res = NULL;
	return (main_logic(res, n, sign));
}
