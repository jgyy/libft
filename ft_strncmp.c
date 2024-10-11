/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 16:01:16 by jegoh             #+#    #+#             */
/*   Updated: 2023/09/11 20:42:46 by jegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// strncmp function compares the first n characters of two strings.
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i] || s1[i] == '\0' || s2[i] == '\0')
		{
			if ((unsigned char)s1[i] < (unsigned char)s2[i])
				return (-1);
			else if ((unsigned char)s1[i] > (unsigned char)s2[i])
				return (1);
			return (0);
		}
		i++;
	}
	return (0);
}
/*
#include "libft.h"
#include <assert.h>
#include <string.h>
#include <stdio.h>

int main() {
    printf("Test 1: Basic string comparison\n");
    assert(ft_strncmp("hello", "hellz", 4) == strncmp("hello", "hellz", 4));

    printf("Test 2: Testing the full length\n");
    assert(ft_strncmp("hello", "hellz", 5) == strncmp("hello", "hellz", 5));

    printf("Test 3: Both strings are empty\n");
    assert(ft_strncmp("", "", 5) == strncmp("", "", 5));

    printf("Test 4: One string is empty\n");
    assert(ft_strncmp("hello", "", 5) == strncmp("hello", "", 5));

    printf("Test 5: Other string is empty\n");
    assert(ft_strncmp("", "hello", 5) == strncmp("", "hello", 5));

    printf("Test 6: Compare 0 characters\n");
    assert(ft_strncmp("hello", "world", 0) == strncmp("hello", "world", 0));

    printf("Test 7: Strings are the same but with different lengths\n");
    assert(ft_strncmp("hello", "helloo", 5) == strncmp("hello", "helloo", 5));

    printf("Test 8: Test with spaces\n");
    assert(ft_strncmp("hello world", "hello worlz", 10)
		== strncmp("hello world", "hello worlz", 10));

    printf("Test 9: Strings are the same but second string is shorter\n");
    assert(ft_strncmp("hello", "hell", 5) == strncmp("hello", "hell", 5));

    printf("Test 10: String with special characters\n");
    assert(ft_strncmp("hello!", "hello?", 6)
		== strncmp("hello!", "hello?", 6));

    printf("Test 11: Non-English characters\n");
    assert(ft_strncmp("héllo", "héllo", 5) == strncmp("héllo", "héllo", 5));

    printf("Test 12: Large n value\n");
    assert(ft_strncmp("hello", "hellz", 100)
		== strncmp("hello", "hellz", 100));

    printf("Test 13: Different case\n");
    assert(ft_strncmp("HELLO", "hello", 5) == strncmp("HELLO", "hello", 5));

    printf("Test 14: Only one different character\n");
    assert(ft_strncmp("a", "b", 1) == strncmp("a", "b", 1));

    printf("Test 15: Numbers in string\n");
    assert(ft_strncmp("12345", "12349", 5) == strncmp("12345", "12349", 5));

    printf("Test 16: Longer strings with a difference at the end\n");
    assert(ft_strncmp("This is a longer string with a difference at the end",
		"This is a longer string with a difference at the end!", 60)
		== strncmp("This is a longer string with a difference at the end",
		"This is a longer string with a difference at the end!", 60));

    printf("Test 17: Non-English characters with different accents\n");
    assert(ft_strncmp("héllo", "hěllo", 5)
		== strncmp("héllo", "hěllo", 5));

    printf("Test 18: Tab characters\n");
    assert(ft_strncmp("hello\tworld", "hello\tworlz", 11)
		== strncmp("hello\tworld", "hello\tworlz", 11));

    printf("Test 19: New line characters\n");
    assert(ft_strncmp("hello\nworld", "hello\nworlz", 11)
		== strncmp("hello\nworld", "hello\nworlz", 11));

    printf("Test 20: Mix of characters\n");
    assert(ft_strncmp("@#$%^&*()", "@#$%^&*()!", 10)
		== strncmp("@#$%^&*()", "@#$%^&*()!", 10));

    printf("All tests passed!\n");
    return 0;
}
*/
