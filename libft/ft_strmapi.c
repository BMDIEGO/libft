/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrajo <dbarrajo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:26:40 by dbarrajo          #+#    #+#             */
/*   Updated: 2024/10/17 15:55:52 by dbarrajo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Función que aplica la función 'f' a cada carácter de la cadena 's', 
// creando una nueva cadena con el resultado.
// Retorna un nuevo string en el que cada carácter es modificado según 'f'.
// Linea 29 - Si 's' o 'f' son NULL, retorna NULL.
// Linea 31 - Reserva memoria para la nueva cadena (tamaño de 's' + 1 para 
// el carácter nulo).
// Linea 37 - Aplica la función 'f' a cada carácter de 's' y lo guarda en 
// 'new_str'.

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_str;
	size_t	i;

	if (!s || !f)
		return (NULL);
	new_str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!new_str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
/* 
int main()
{
	char *s = "Hola Mundo";
	printf("%s\n", ft_strmapi(s, ft_toupper));
	printf("%s\n", ft_strmapi(s, ft_tolower));
} */