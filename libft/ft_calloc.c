/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrajo <dbarrajo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 13:13:32 by dbarrajo          #+#    #+#             */
/*   Updated: 2024/10/02 16:54:13 by dbarrajo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
/* int main()
{
	void *ptr = ft_calloc(10, 4);
	if (ptr == NULL)
	{
		printf("Error\n");
		return (1);
	}
	printf("Memory allocated successfully\n");
	free(ptr);
	return (0);
} */