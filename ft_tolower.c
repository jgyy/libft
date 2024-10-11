/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 18:15:54 by jegoh             #+#    #+#             */
/*   Updated: 2023/09/11 22:17:50 by jegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// if the given character c is within the range of uppercase letters,
// it will lower the respective uppercase letters with lower case.
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	return (c);
}
/*
#include <stdio.h>
#include <ctype.h>
#include <assert.h>

int ft_tolower(int c);

int main() {
    char test_cases[] = {'A', 'B', 'Z', 'a', 'b', 'z', '1', '9', '$', '%'};

    for (unsigned int i = 0; i < sizeof(test_cases); i++) {
        char input = test_cases[i];

        int expected = tolower(input);
        int result = ft_tolower(input);

        printf("Input: %c\n", input);
        printf("Expected: %c (%d)\n", expected, expected);
        printf("Result: %c (%d)\n", result, result);

        assert(result == expected);
        printf("Test passed!\n\n");
    }

    printf("All tests passed.\n");

    return 0;
}
*/
