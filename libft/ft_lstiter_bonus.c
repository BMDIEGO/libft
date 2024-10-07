/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrajo <dbarrajo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:31:07 by dbarrajo          #+#    #+#             */
/*   Updated: 2024/10/07 16:46:40 by dbarrajo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/* 
int main()
{
	t_list *lst = ft_lstnew("Hola");
	t_list *lst2 = ft_lstnew("Mundo");
	t_list *lst3 = ft_lstnew("!");
	t_list *lst4 = ft_lstnew("!");
	lst->next = lst2;
	lst2->next = lst3;
	lst3->next = lst4;
	ft_lstiter(lst, ft_putstr);
}*/