/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumercha <hello@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 14:25:49 by lumercha          #+#    #+#             */
/*   Updated: 2026/01/12 14:07:29 by lumercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			strlen;
	char			*dst;
	unsigned int	substr_len;

	if (s == NULL)
		return (NULL);
	strlen = ft_strlen(s);
	if (start >= strlen || len == 0)
		return (ft_strdup(""));
	substr_len = len;
	if (strlen <= len)
		substr_len = strlen - start;
	dst = malloc(sizeof(char) * (substr_len + 1));
	if (dst == NULL)
		return (NULL);
	ft_strlcpy(dst, &s[start], substr_len + 1);
	return (dst);
}
