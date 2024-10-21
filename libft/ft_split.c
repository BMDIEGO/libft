/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrajo <dbarrajo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:25:42 by dbarrajo          #+#    #+#             */
/*   Updated: 2024/10/17 15:52:51 by dbarrajo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Función auxiliar que cuenta el número de palabras en la cadena 's', 
// separadas por el delimitador 'c'.
// Retorna el número de palabras encontradas.
// Linea 33 - Si el carácter no es el delimitador y no estamos dentro de 
// una palabra, comienza una nueva palabra.
// Linea 35 - Marca que estamos dentro de una palabra.
// Linea 38 - Si se encuentra el delimitador, marca el final de la palabra 
// actual.

static size_t	ft_word_count(const char *s, char c)
{
	size_t	count;
	size_t	in_substring;

	count = 0;
	in_substring = 0;
	while (*s)
	{
		if (*s != c && !in_substring)
		{
			in_substring = 1;
			count++;
		}
		else if (*s == c)
			in_substring = 0;
		s++;
	}
	return (count);
}

// Función auxiliar que crea una nueva cadena duplicando el segmento de 
// 's' desde 'start' hasta 'finish'.
// Retorna un puntero a la nueva cadena.
// Linea 56 - Asigna memoria para la nueva palabra.
// Linea 60 - Copia el segmento de la cadena original a la nueva palabra.

static char	*ft_word_dup(const char *s, size_t start, size_t finish)
{
	char	*word;
	size_t	i;

	word = (char *)malloc((finish - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (start < finish)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

// Función principal que divide la cadena 's' en un array de cadenas, 
// usando el carácter 'c' como delimitador.
// Retorna un array de cadenas.
// Linea 83 - Asigna memoria para el array de subcadenas, con espacio 
// para todas las palabras más el NULL final.
// Linea 93 - Avanza hasta el final de la palabra.
// Linea 95 - Si se encontró una palabra, la duplica y la añade al array.
// Linea 96 - Añade NULL al final del array.
char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	i;
	size_t	j;
	size_t	start;

	if (!s)
		return (NULL);
	split = (char **)malloc((ft_word_count(s, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (start < i)
			split[j++] = ft_word_dup(s, start, i);
	}
	split[j] = NULL;
	return (split);
}
/* 
int main()
{
	char **split;
	split = ft_split("Hola Mundo", ' ');
	printf("%s\n", split[0]);
	printf("%s\n", split[1]);
} */