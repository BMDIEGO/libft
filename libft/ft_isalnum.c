/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrajo <dbarrajo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:40:08 by dbarrajo          #+#    #+#             */
/*   Updated: 2024/10/03 17:29:04 by dbarrajo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
/* 
int main()
{
	printf("%d\n", ft_isalnum('a'));
	printf("%d\n", ft_isalnum('1'));
	printf("%d\n", ft_isalnum('A'));
	printf("%d\n", ft_isalnum('!'));
} */