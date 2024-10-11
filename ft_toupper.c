/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 18:09:54 by jegoh             #+#    #+#             */
/*   Updated: 2023/09/10 23:10:46 by jegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// toupper function takes an integer (ASCII value of a character) as input
// and checks if it's within the lowercase ASCII range ('a' to 'z').
// Converts to upper case if it is true.
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - ('a' - 'A'));
	return (c);
}
/*
#include <stdio.h>
#include <ctype.h>
#include <assert.h>

int ft_toupper(int c);

void test_ft_toupper() {
    char test[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

    for (int i = 0; test[i] != '\0'; i++) {
        char input = test[i];
        int expected = toupper(input);
        int result = ft_toupper(input);

        assert(result == expected);
        printf("Input: %c, ft_toupper: %c, toupper: %c\n",
			input, result, expected);
    }
}

int main() {
    test_ft_toupper();
    printf("All tests passed!\n");
	return 0;
}
*/
