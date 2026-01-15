/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumercha <hello@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 14:21:37 by lumercha          #+#    #+#             */
/*   Updated: 2026/01/14 14:09:40 by lumercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t bytes)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	if (src < dest)
	{
		while (bytes--)
			d[bytes] = s[bytes];
	}
	else if (src > dest)
	{
		i = 0;
		while (i < bytes)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
