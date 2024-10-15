/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrajo <dbarrajo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:24:44 by dbarrajo          #+#    #+#             */
/*   Updated: 2024/10/09 17:37:37 by dbarrajo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	if (!s || start >= ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	i = 0;
	while (i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
/* 
int main()
{
	char *s = "Hola Mundo";
	printf("%s\n", ft_substr(s, 5, 5));
	printf("%s\n", ft_substr(s, 5, 10));
	printf("%s\n", ft_substr(s, 5, 0));
	printf("%s\n", ft_substr(s, 0, 5));
	printf("%s\n", ft_substr(s, 0, 0));
	printf("%s\n", ft_substr(s, 0, 10));
	printf("%s\n", ft_substr(s, 10, 5));
	printf("%s\n", ft_substr(s, 10, 0));
	printf("%s\n", ft_substr(s, 10, 10));
} */