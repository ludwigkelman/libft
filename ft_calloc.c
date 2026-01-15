/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumercha <hello@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 20:02:44 by lumercha          #+#    #+#             */
/*   Updated: 2026/01/08 13:40:34 by lumercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*res;
	size_t	n;

	if (size != 0 && SIZE_MAX / size < nmemb)
		return (NULL);
	n = nmemb * size;
	res = malloc(n);
	if (!res)
		return (NULL);
	ft_bzero(res, n);
	return (res);
}
