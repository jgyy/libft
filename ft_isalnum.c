/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 17:21:59 by jegoh             #+#    #+#             */
/*   Updated: 2023/09/09 11:42:14 by jegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// isalnum checks whether the input character c falls within the ASCII ranges
// of uppercase letters, lowercase letters, or digits.
#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
/*
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int ft_isalnum(int c);

int main() {
    char test_chars[] = {'A', 'a', '1', '*', '?', ' ', '\t', '\n', '@', '$'};

    for (unsigned long i = 0;
		i < sizeof(test_chars) / sizeof(test_chars[0]); i++) {
        bool ft_result = ft_isalnum(test_chars[i]);
        bool isalnum_result = isalnum(test_chars[i]);

        printf("Character '%c': ft_isalnum = %d, isalnum = %d\n",
               test_chars[i], ft_result, isalnum_result);

        // Assertion
        if (ft_result == isalnum_result) {
            printf("Test passed!\n");
        } else {
            printf("Test failed!\n");
        }
    }

    return 0;
}
*/
