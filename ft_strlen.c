/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 11:25:55 by jegoh             #+#    #+#             */
/*   Updated: 2023/09/04 22:44:48 by jgyy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// strlen is used to determine the length of a null-terminated string
#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	length;

	length = 0;
	while (*str != '\0')
	{
		length++;
		str++;
	}
	return (length);
}
/*
#include <stdio.h>
#include <string.h>
#include <assert.h>

size_t ft_strlen(const char *str);

int main() {
    const char *test_cases[] = {
        "",
        "Hello",
        "Lorem ipsum dolor sit amet",
        "1234567890",
        "Testing strlen function",
        "Short",
        "A",
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ",
        "abcdefghijklmnopqrstuvwxyz",
        "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"
    };
    size_t num_test_cases = sizeof(test_cases) / sizeof(test_cases[0]);
    for (size_t i = 0; i < num_test_cases; i++) {
        const char *test_str = test_cases[i];
        size_t ft_result = ft_strlen(test_str);
        size_t std_result = strlen(test_str);
        if (ft_result == std_result) {
            printf("Test case %zu: PASSED\n", i + 1);
            printf("    ft_strlen result: %zu\n", ft_result);
            printf("    strlen result   : %zu\n", std_result);
        } else {
            printf("Test case %zu: FAILED\n", i + 1);
            printf("    ft_strlen result: %zu\n", ft_result);
            printf("    strlen result   : %zu\n", std_result);
        }
    }
    printf("All test cases executed!\n");
    return 0;
}
*/
