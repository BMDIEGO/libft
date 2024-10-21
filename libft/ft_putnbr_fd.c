/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrajo <dbarrajo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:28:48 by dbarrajo          #+#    #+#             */
/*   Updated: 2024/10/17 15:47:42 by dbarrajo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Función que escribe el número entero 'n' en el file descriptor 'fd'.
// Maneja números negativos e imprime dígito a dígito.
// Linea 31 - Si el número tiene más de un dígito, llama recursivamente para 
// imprimir los dígitos anteriores.
// Linea 32 - Llama a sí misma con el número dividido por 10.
// Linea 33 - Imprime el último dígito.
void	ft_putnbr_fd(int n, int fd)
{
	long	num;

	num = n;
	if (num < 0)
	{
		ft_putchar_fd('-', fd);
		num = -num;
	}
	if (num >= 10)
		ft_putnbr_fd(num / 10, fd);
	ft_putchar_fd(num % 10 + '0', fd);
}
/* 
int main()
{
	ft_putnbr_fd(1234567890, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(-1234567890, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(0, 1);
	ft_putchar_fd('\n', 1);
} */