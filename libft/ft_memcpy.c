/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrajo <dbarrajo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:41:35 by dbarrajo          #+#    #+#             */
/*   Updated: 2024/10/17 15:46:18 by dbarrajo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

// Función que copia 'n' bytes de la memoria apuntada por 'src' a la 
// memoria apuntada por 'dst'.
// Devuelve un puntero a 'dst'.
// Linea 29 - Convierte 'dst' a un puntero a unsigned char.
// Linea 33 - Copia 'n' bytes de 'src' a 'dst'.
// Linea 34 - Asigna el valor del byte de 'src' al byte de 'dst' 
// y avanza ambos punteros.

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	while (n--)
		*d++ = *s++;
	return (dst);
}
/* 
int main()
{
	char *src = "Hola Mundo";
	char dst[10];
	ft_memcpy(dst, src, 10);
	printf("%s\n", dst);
} */