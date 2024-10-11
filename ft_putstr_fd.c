/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 14:55:22 by jegoh             #+#    #+#             */
/*   Updated: 2023/09/01 22:55:41 by jgyy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Outputs the string ’s’ to the given file descriptor.
#include "libft.h"

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
/*
#include <unistd.h>
#include <string.h>
#include <stdio.h>

void ft_putstr_fd(char *s, int fd);

int main() {
	printf("\nTest Case 1:\n");
    char str1[] = "Hello, world!";
    ft_putstr_fd(str1, 1);

	printf("\nTest Case 2:\n");
    char str2[] = "";
    ft_putstr_fd(str2, 1);

	printf("\nTest Case 3:\n");
    char str3[] = "Line 1\nLine 2\n";
    ft_putstr_fd(str3, 1);

	printf("\nTest Case 4:\n");
    char *str4 = NULL;
    ft_putstr_fd(str4, 1);

	printf("\nTest Case 5:\n");
    char str5[] = "Special\tcharacters\n";
    ft_putstr_fd(str5, 1);

	printf("\nTest Case 6:\n");
    char str6[] = "Error message\n";
    ft_putstr_fd(str6, 2);

	printf("\nTest Case 7:\n");
    char str7[] = "A";
    ft_putstr_fd(str7, 1);

	printf("\nTest Case 8:\n");
    char str8[] = "   ";
    ft_putstr_fd(str8, 1);

	printf("\nTest Case 9:\n");
    char str9[] = "12345";
    ft_putstr_fd(str9, 1);

	printf("\nTest Case 10:\n");
    char str10[] = "Escape\\character\n";
    ft_putstr_fd(str10, 1);

    return 0;
}
*/
