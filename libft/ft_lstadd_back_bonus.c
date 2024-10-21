/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrajo <dbarrajo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:30:04 by dbarrajo          #+#    #+#             */
/*   Updated: 2024/10/17 15:41:36 by dbarrajo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Función que añade un nuevo elemento 'new' al final de la lista enlazada 
// 'lst'.
// Si la lista está vacía, 'new' se convierte en el primer elemento.
// Linea 26 - Puntero para almacenar el último elemento de la lista.
// Linea 31 - Si la lista está vacía, asigna 'new' como el primer elemento.
// Linea 35 - Obtiene el último elemento de la lista.
// Linea 36 - Asigna el nuevo elemento 'new' como el siguiente del último 
// elemento.

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst)
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			last = ft_lstlast(*lst);
			last->next = new;
		}
	}
}
/* 
int main()
{
	t_list *lst = NULL;
	t_list *new = ft_lstnew("Hola");
	ft_lstadd_back(&lst, new);
	printf("%s\n", lst->content);
	printf("%s\n", lst->next->content);
} */
