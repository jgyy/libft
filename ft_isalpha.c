/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 16:35:20 by jegoh             #+#    #+#             */
/*   Updated: 2023/09/09 15:27:33 by jegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Check if the character is an uppercase letter (A-Z) or a
// lowercase letter (a-z)
#include "libft.h"

static int	ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

static int	ft_islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_isalpha(int c)
{
	return (ft_isupper(c) || ft_islower(c));
}
/*
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int	ft_isalpha(int c);

int main() {
    bool all_tests_passed = true;

    char test_cases[] = {'a', 'Z', '1', '*', ' ', 'A', 'z', '9', '_', 'B'};
    int num_test_cases = sizeof(test_cases) / sizeof(test_cases[0]);

    for (int i = 0; i < num_test_cases; ++i) {
        char c = test_cases[i];
        int expected_result = isalpha(c);
        int ft_result = ft_isalpha(c);

        printf("Testing character '%c':\n", c);
        printf("isalpha result: %d\n", expected_result);
        printf("ft_isalpha result: %d\n", ft_result);

        if (expected_result != ft_result) {
            printf("Test failed!\n\n");
            all_tests_passed = false;
        } else {
            printf("Test passed.\n\n");
        }
    }

    if (all_tests_passed) {
        printf("All tests passed!\n");
    } else {
        printf("Some tests failed.\n");
    }

    return 0;
}
*/
