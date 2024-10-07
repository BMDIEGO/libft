/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrajo <dbarrajo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:30:58 by dbarrajo          #+#    #+#             */
/*   Updated: 2024/10/07 16:46:50 by dbarrajo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}
/* 
int main()
{
	t_list *lst = ft_lstnew("Hola");
	t_list *lst2 = ft_lstnew("Mundo");
	t_list *lst3 = ft_lstnew("!");
	lst->next = lst2;
	lst2->next = lst3;
	ft_lstclear(&lst, &ft_lstdelone);
}*/