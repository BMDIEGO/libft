/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrajo <dbarrajo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:25:28 by dbarrajo          #+#    #+#             */
/*   Updated: 2024/10/17 15:57:15 by dbarrajo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Función que verifica si el carácter 'c' está presente en la cadena 'set'.
// Retorna 1 si 'c' está en 'set', de lo contrario retorna 0.
// Linea 24 - Si se encuentra el carácter, retorna 1.

static int	ft_isset(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

// Función que elimina los caracteres del conjunto 'set' al inicio y al 
// final de la cadena 's1'.
// Retorna una nueva cadena con los caracteres eliminados o NULL si hay 
// un error.
// Linea 49 - Avanza el índice 'start' mientras los caracteres sean 
// parte del conjunto 'set'.
// Linea 52 - Retrocede el índice 'end' mientras los caracteres sean 
// parte del conjunto 'set'.
// Linea 54 - Retorna la subcadena resultante sin los caracteres 
// del conjunto 'set'.

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_isset(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_isset(s1[end - 1], set))
		end--;
	return (ft_substr(s1, start, end - start));
}
/* 
int main()
{
	char *s = "Hola Mundo";
	char *set = "H";
	printf("%s\n", ft_strtrim(s, set));
	printf("%s\n", strtrim(s, set));
} */