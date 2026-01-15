/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumercha <hello@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 11:46:22 by lumercha          #+#    #+#             */
/*   Updated: 2026/01/14 11:44:25 by lumercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void ft_list(t_list *lst)
{
    
	if (lst->next->content < 2)
       tmp = lst->next
       lst->next = lst->next->next
       ft_lstdelone(tmp)
     
}
*/
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}
