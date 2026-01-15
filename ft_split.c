/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumercha <hello@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 16:08:51 by lumercha          #+#    #+#             */
/*   Updated: 2026/01/15 10:50:02 by lumercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	words_counter(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			while (*s != c && *s != 0)
				s++;
			count++;
		}
	}
	return (count);
}

static size_t	split_strlen(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (*s != c && *s != 0)
	{
		len++;
		s++;
	}
	return (len);
}

static void	free_split(char **split, size_t	j)
{
	while (j > 0)
		free(split[--j]);
	free(split);
}

static char	**main_logic(char **split, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	while (s[i] != 0)
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			len = split_strlen(&s[i], c);
			split[j] = ft_substr(s, i, len);
			if (!split[j])
			{
				free_split(split, j);
				return (NULL);
			}
			i += len;
			j++;
		}
	}
	split[j] = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;

	split = malloc(sizeof(char *) * (words_counter(s, c) + 1));
	if (!split || !s)
		return (NULL);
	else
		main_logic(split, s, c);
	return (split);
}
