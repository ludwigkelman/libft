/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumercha <hello@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 13:52:59 by lumercha          #+#    #+#             */
/*   Updated: 2026/01/14 14:08:15 by lumercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t bytes)
{
	unsigned char	*res;
	unsigned char	*s;
	size_t			i;

	i = 0;
	s = (unsigned char *)src;
	res = (unsigned char *)dest;
	while (i < bytes)
	{
		*res++ = *s++;
		i++;
	}
	return (dest);
}
