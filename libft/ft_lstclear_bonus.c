/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrajo <dbarrajo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:30:58 by dbarrajo          #+#    #+#             */
/*   Updated: 2024/10/17 15:42:46 by dbarrajo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Función que libera la memoria de todos los elementos de la lista enlazada 
// 'lst'
// y llama a la función 'del' para eliminar el contenido de cada nodo.
// Linea 29 - Almacena el siguiente nodo.
// Linea 30 - Libera la memoria del nodo actual y llama a 'del' para eliminar 
// su contenido.
// Linea 31 - Avanza al siguiente nodo.

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