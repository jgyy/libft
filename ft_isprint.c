/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 18:00:01 by jegoh             #+#    #+#             */
/*   Updated: 2023/09/12 19:24:29 by jegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// isprint function checks whether a given character is a printable character
#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
/*
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int ft_isprint(int c);

int main() {
    int test_cases[] = { 'a', 'Z', '1', ' ', '~', '\t', '\n', '\r', '\v', '\f' };
    size_t num_tests = sizeof(test_cases) / sizeof(test_cases[0]);

    for (size_t i = 0; i < num_tests; ++i) {
        int c = test_cases[i];

        bool ft_result = ft_isprint(c);
        bool isprint_result = isprint(c);

        printf("Character: '%c' (ASCII: %d)\n", c, c);
        printf("ft_isprint: %s\n", ft_result ? "true" : "false");
        printf("isprint:    %s\n", isprint_result ? "true" : "false");

        if (ft_result == isprint_result) {
            printf("Test passed.\n");
        } else {
            printf("Test FAILED.\n");
        }

        printf("\n");
    }

    return 0;
}
*/
