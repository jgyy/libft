/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 12:27:33 by jegoh             #+#    #+#             */
/*   Updated: 2023/09/11 20:09:24 by jegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// strrchr function iterates through the input string and keeps track of the
// last occurrence of the specified character.
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last_occurrence;

	last_occurrence = NULL;
	while (1)
	{
		if (*s == (char)c)
			last_occurrence = (char *)s;
		if (*s == '\0')
			break ;
		s++;
	}
	return (last_occurrence);
}
/*
#include "libft.h"
#include <assert.h>
#include <stdio.h>
#include <string.h>

void	test_case(char *s, char c)
{
	printf("Testing: ft_strrchr(\"%s\", '%c')\n", s, c);
	assert(ft_strrchr(s, c) == strrchr(s, c));
	printf("PASSED!\n\n");
}

void test_ft_strrchr() {
    char *str = "Hello, World!";

    test_case(str, 'H');
    test_case(str, 'o');
    test_case(str, 'z');
    test_case(str, ',');
    test_case(str, '\0');
    test_case(str, '!');
    test_case("", 'a');
    test_case("a", 'a');
    test_case("a", 'b');
    test_case("ab", 'a');
    test_case("ab", 'b');
    test_case("abcabc", 'a');
    test_case("abcabc", 'b');
    test_case("abcabc", 'c');
    test_case("abcabc", 'd');
    test_case("abcdefabcdef", 'f');
    test_case("abcdefabcdef", 'e');
    test_case("abcdefabcdef", '\0');
    test_case("zzzz", 'z');
    test_case("zzzz", 'a');

    printf("All tests passed!\n");
}

int main() {
    test_ft_strrchr();
    return 0;
}
*/
