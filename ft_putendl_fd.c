/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 19:52:07 by jegoh             #+#    #+#             */
/*   Updated: 2023/09/10 16:51:15 by jegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Outputs the string ’s’ to the given file descriptor, followed by a newline.
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s && fd >= 0)
	{
		while (*s)
		{
			write(fd, s, 1);
			s++;
		}
		write(fd, "\n", 1);
	}
}
/*
#include <unistd.h>
#include <fcntl.h>

void ft_putendl_fd(char *s, int fd);

int main() {
    ft_putendl_fd("Test Case 1: Hello, world!", STDOUT_FILENO);

    ft_putendl_fd("Test Case 2: Empty string", STDOUT_FILENO);

    ft_putendl_fd("Test Case 3: NULL string pointer", STDOUT_FILENO);

    int file_fd = open("/tmp/test_output.txt", O_WRONLY | O_CREAT, 0666);
    ft_putendl_fd("Test Case 4: Writing to a file.", file_fd);
    close(file_fd);

    ft_putendl_fd("Test Case 5: Negative file descriptor", -1);

    ft_putendl_fd("Test Case 6: Writing a single character", STDOUT_FILENO);

    ft_putendl_fd("Test Case 7: Writing a long string...", STDOUT_FILENO);

    ft_putendl_fd("Test Case 8: Special characters: !@#$%^&*()", STDOUT_FILENO);

    ft_putendl_fd("Test Case 9: Writing to an invalid file descriptor", 9999);

    ft_putendl_fd("Test Case 10: This should go to stderr.", STDERR_FILENO);

    return 0;
}
*/
