/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 17:48:04 by jegoh             #+#    #+#             */
/*   Updated: 2023/08/31 21:02:21 by jgyy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// isascii function is used to check whether a given character falls within
// the ASCII range (0-127).
#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*
#include <stdio.h>
#include <ctype.h>

int ft_isascii(int c);

int main() {
    int testCases[] = {-1, 0, 32, 65, 97, 126, 127, 128, 255, 1000};
    int numTestCases = sizeof(testCases) / sizeof(testCases[0]);

    for (int i = 0; i < numTestCases; i++) {
        int input = testCases[i];

        int ft_result = ft_isascii(input);

        int isascii_result = isascii(input);

        printf("Input: %d, ft_isascii: %d, isascii: %d\n",
			input, ft_result, isascii_result);

        if (ft_result == isascii_result) {
            printf("Test case %d PASSED\n", i + 1);
        } else {
            printf("Test case %d FAILED\n", i + 1);
        }
    }

    return 0;
}
*/
