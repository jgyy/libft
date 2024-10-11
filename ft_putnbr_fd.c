/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 19:58:05 by jegoh             #+#    #+#             */
/*   Updated: 2023/08/31 22:40:16 by jgyy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Outputs the integer ’n’ to the given file descriptor.
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n < 10)
	{
		ft_putchar_fd(n + '0', fd);
		return ;
	}
	ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd(n % 10 + '0', fd);
}
/*
#include <unistd.h>

void ft_putnbr_fd(int n, int fd);

void	ft_putstr_fd(char *s, int fd)
{
	if (s == NULL)
		return ;
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
}

int main() {
    int fd = 1;

    ft_putnbr_fd(0, fd);
    ft_putstr_fd(" : 0\n", fd);

    ft_putnbr_fd(123, fd);
    ft_putstr_fd(" : 123\n", fd);

    ft_putnbr_fd(-456, fd);
    ft_putstr_fd(" : -456\n", fd);

    ft_putnbr_fd(987654321, fd);
    ft_putstr_fd(" : 987654321\n", fd);

    ft_putnbr_fd(-123456789, fd);
    ft_putstr_fd(" : -123456789\n", fd);

    ft_putnbr_fd(5, fd);
    ft_putstr_fd(" : 5\n", fd);

    ft_putnbr_fd(-42, fd);
    ft_putstr_fd(" : -42\n", fd);

    ft_putnbr_fd(1000, fd);
    ft_putstr_fd(" : 1000\n", fd);

    ft_putnbr_fd(-999, fd);
    ft_putstr_fd(" : -999\n", fd);

    ft_putnbr_fd(2147483647, fd);
    ft_putstr_fd(" : 2147483647\n", fd);

    ft_putnbr_fd(-2147483648, fd);
    ft_putstr_fd(" : -2147483648\n", fd);

	return 0;
}
*/
