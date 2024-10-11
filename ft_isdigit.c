/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 16:48:37 by jegoh             #+#    #+#             */
/*   Updated: 2023/09/01 22:29:42 by jgyy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// isdigit takes a character as input and returns true if the character is a
// digit ('0' to '9'), and false otherwise.
#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
/*
#include <stdio.h>
#include <ctype.h>
#include <assert.h>

int ft_isdigit(int c);

int main() {
    char test_cases[] = {'0', '5', '9', 'a', 'A', '!', ' ', '\n', '\t', '\0'};
	unsigned int	i;

    for (i = 0; i < sizeof(test_cases) / sizeof(test_cases[0]); i++) {
        int result_ft = ft_isdigit(test_cases[i]);
        int result_is = isdigit(test_cases[i]);

        printf("Character: '%c', ft_isdigit: %d, isdigit: %d\n",
               test_cases[i], result_ft, result_is);

        assert(result_ft == result_is);
    }

    printf("All tests passed!\n");

    return 0;
}
*/
