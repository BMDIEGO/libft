/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrajo <dbarrajo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:27:29 by dbarrajo          #+#    #+#             */
/*   Updated: 2024/10/17 15:47:04 by dbarrajo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Función que escribe el carácter 'c' en el file descriptor 'fd'.
// Utiliza la función 'write' del sistema para realizar la operación.
// Linea 21 - Escribe el carácter 'c' en el file descriptor 'fd'.

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/* 
int main()
{
	ft_putchar_fd('H', 1);
	ft_putchar_fd('o', 1);
	ft_putchar_fd('l', 1);
	ft_putchar_fd('a', 1);
	ft_putchar_fd('\n', 1);
} */