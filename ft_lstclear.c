/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumercha <hello@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 12:53:13 by lumercha          #+#    #+#             */
/*   Updated: 2026/01/14 11:47:20 by lumercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*pt;

	if (!(*lst))
		return ;
	pt = *lst;
	while ((*lst))
	{
		del((*lst)->content);
		(*lst) = (*lst)->next;
		free(pt);
		pt = (*lst);
	}
}
