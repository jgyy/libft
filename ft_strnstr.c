/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 13:50:18 by jegoh             #+#    #+#             */
/*   Updated: 2023/09/12 21:24:37 by jegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// strnstr function searches for the first occurrence of a substring within
// a given string, limiting the search to a specified length.
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;

	if (!*little)
		return ((char *)big);
	little_len = 0;
	while (little[little_len])
		little_len++;
	while (*big && len >= little_len)
	{
		if (*big == *little && !ft_strncmp(big, little, little_len))
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}
/*
#include "libft.h"
#include <assert.h>
#include <string.h>
#include <stdio.h>

void test_ft_strnstr()
{
    printf("Test 1: Basic test: %s\n",
		ft_strnstr("Hello, world!", "world", 3));
	assert(ft_strnstr("Hello, world!", "world", 13)
		== strnstr("Hello, world!", "world", 13));

    printf("Test 2: Needle at the beginning\n");
    assert(ft_strnstr("Hello, world!", "Hello", 13)
		== strnstr("Hello, world!", "Hello", 13));

    printf("Test 3: len is 0\n");
    assert(ft_strnstr("Hello, world!", "world", 0)
		== strnstr("Hello, world!", "world", 0));

    printf("Test 4: Needle does not exist\n");
    assert(ft_strnstr("Hello, world!", "Moon", 13)
		== strnstr("Hello, world!", "Moon", 13));

    printf("Test 5: Empty haystack\n");
    assert(ft_strnstr("", "world", 13) == strnstr("", "world", 13));

    printf("Test 6: Empty needle\n");
    assert(ft_strnstr("Hello, world!", "", 13)
		== strnstr("Hello, world!", "", 13));

    printf("Test 7: Both empty\n");
    assert(ft_strnstr("", "", 13) == strnstr("", "", 13));

    printf("Test 8: Check boundary\n");
    assert(ft_strnstr("Hello, world!", "world", 7)
		== strnstr("Hello, world!", "world", 7));

    printf("Test 9: Full match\n");
    assert(ft_strnstr("Hello", "Hello", 5) == strnstr("Hello", "Hello", 5));

    printf("Test 10: Just beyond the boundary\n");
    assert(ft_strnstr("Hello, world!", "world", 6)
		== strnstr("Hello, world!", "world", 6));

    printf("Test 11: Check last character\n");
    assert(ft_strnstr("Hello, world!", "d", 13)
		== strnstr("Hello, world!", "d", 13));

    printf("Test 12: Check first character\n");
    assert(ft_strnstr("Hello, world!", "H", 13)
		== strnstr("Hello, world!", "H", 13));

    printf("Test 13: Multiple occurrences\n");
    assert(ft_strnstr("world world world", "world", 15)
		== strnstr("world world world", "world", 15));

    printf("Test 14: Needle longer than haystack\n");
    assert(ft_strnstr("world", "world world", 5)
		== strnstr("world", "world world", 5));

    printf("Test 15: One character search\n");
    assert(ft_strnstr("aaaaa", "a", 5) == strnstr("aaaaa", "a", 5));

    printf("Test 16: Same start, different finish\n");
    assert(ft_strnstr("abcde", "abcz", 5) == strnstr("abcde", "abcz", 5));

    printf("Test 17: Needle at the very end, boundary check\n");
    assert(ft_strnstr("abcde", "e", 5) == strnstr("abcde", "e", 5));

    printf("Test 18: Searching beyond the boundary\n");
    assert(ft_strnstr("abcde", "e", 4) == strnstr("abcde", "e", 4));

    printf("Test 19: One character, not found\n");
    assert(ft_strnstr("abcde", "f", 5) == strnstr("abcde", "f", 5));

    printf("Test 20: Check the middle of the string\n");
    assert(ft_strnstr("abcdef", "cde", 6) == strnstr("abcdef", "cde", 6));

	printf("All tests passed!\n");
}

int main()
{
    test_ft_strnstr();
    return 0;
}
*/
