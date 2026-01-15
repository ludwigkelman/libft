/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumercha <hello@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 15:39:59 by lumercha          #+#    #+#             */
/*   Updated: 2026/01/14 14:09:06 by lumercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*res;

	if (!s)
		return (NULL);
	i = 0;
	res = ft_strdup(s);
	if (res == NULL)
		return (NULL);
	while (res[i] != 0)
	{
		res[i] = f(i, res[i]);
		i++;
	}
	return (res);
}
