/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumercha <hello@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 18:53:10 by lumercha          #+#    #+#             */
/*   Updated: 2026/01/12 14:03:01 by lumercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int	len;

	if (str == NULL)
		return (NULL);
	len = ft_strlen(str);
	if (ch == str[len])
		return ((char *)&str[len]);
	while (len > 0 && str[--len])
	{
		if ((unsigned char)str[len] == (unsigned char)ch)
			return ((char *)&str[len]);
	}
	return (NULL);
}
