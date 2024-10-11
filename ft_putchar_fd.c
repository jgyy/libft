/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 14:48:22 by jegoh             #+#    #+#             */
/*   Updated: 2023/09/12 19:25:12 by jegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Outputs the character ’c’ to the given file descriptor.
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#define TEST_FD 100

void ft_putchar_fd(char c, int fd);

int main() {
    int fd = open("/dev/null", O_WRONLY);

    if (fd == -1) {
        perror("Failed to open file descriptor");
        return 1;
    }

    printf("Test 1: Writing a single character 'A'\n");
    ft_putchar_fd('A', fd);

    printf("Test 2: Writing a newline character '\\n'\n");
    ft_putchar_fd('\n', fd);

    printf("Test 3: Writing a null character '\\0'\n");
    ft_putchar_fd('\0', fd);

    printf("Test 4: Using a custom file descriptor (TEST_FD)\n");
    ft_putchar_fd('Z', TEST_FD);

    printf("Test 5: Writing a digit character '5'\n");
    ft_putchar_fd('5', fd);

    printf("Test 6: Writing a special character '$'\n");
    ft_putchar_fd('$', fd);

    printf("Test 7: Writing a space character ' '\n");
    ft_putchar_fd(' ', fd);

    printf("Test 8: Writing an exclamation mark '!'\n");
    ft_putchar_fd('!', fd);

    printf("Test 9: Writing a tab character '\\t'\n");
    ft_putchar_fd('\t', fd);

    printf("Test 10: Writing a question mark '?'\n");
    ft_putchar_fd('?', fd);

    if (close(fd) == -1) {
        perror("Failed to close file descriptor");
        return 1;
    }

    return 0;
}
*/
