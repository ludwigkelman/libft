/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumercha <hello@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 14:17:06 by lumercha          #+#    #+#             */
/*   Updated: 2026/01/07 14:27:28 by lumercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	slen;
	char	*rt;
	char	*res;

	if (s == NULL)
		return (NULL);
	slen = ft_strlen(s);
	res = malloc(sizeof(char) * (slen + 1));
	if (res == NULL)
		return (NULL);
	rt = res;
	while (*s)
		*res++ = *s++;
	*res = 0;
	res = rt;
	return (res);
}
