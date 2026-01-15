/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumercha <hello@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 15:53:07 by lumercha          #+#    #+#             */
/*   Updated: 2026/01/14 13:54:41 by lumercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	chrcmp(char s1, char s2)
{
	return ((unsigned char)s1 - (unsigned char)s2);
}

static size_t	strstart(char const *s1, char const *set)
{
	size_t		start;
	size_t		start_init;
	char const	*set_rt;

	start = 0;
	while (*s1 != 0)
	{
		set_rt = set;
		start_init = start;
		while (*set != 0)
		{
			if (chrcmp(*s1, *set) == 0)
			{
				start++;
				s1++;
			}
			else
				set++;
		}
		if (start_init == start)
			return (start);
		set = set_rt;
	}
	return (start);
}

static size_t	strend(char const *s1, char const *set, size_t len)
{
	size_t		start;
	size_t		start_init;
	char const	*set_rt;

	start = len;
	while (s1[len] != 0)
	{
		set_rt = set;
		start_init = start;
		while (*set != 0)
		{
			if (chrcmp(s1[len], *set) == 0)
			{
				start--;
				len--;
			}
			else
				set++;
		}
		if (start_init == start)
			return (start);
		set = set_rt;
	}
	return (start);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t			s1len;
	unsigned int	start;
	size_t			end;

	if (!s1)
		return (NULL);
	s1len = ft_strlen(s1);
	start = strstart(s1, set);
	end = strend(s1, set, s1len - 1);
	if (start > end)
		return (ft_strdup(""));
	if (start == end)
		return (ft_substr(s1, start, 1));
	else
		return (ft_substr(s1, start, (end + 1) - start));
}
