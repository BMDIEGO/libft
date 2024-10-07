/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrajo <dbarrajo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:29:17 by dbarrajo          #+#    #+#             */
/*   Updated: 2024/10/03 17:39:51 by dbarrajo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}
/* 
int main()
{
	t_list *lst = NULL;
	t_list *new = ft_lstnew("Hola");
	ft_lstadd_front(&lst, new);
	printf("%s\n", lst->content);
	printf("%s\n", lst->next->content);
} */