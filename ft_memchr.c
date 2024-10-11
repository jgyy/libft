/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 21:14:13 by jegoh             #+#    #+#             */
/*   Updated: 2023/09/12 19:25:03 by jegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// memchr function takes a pointer to a memory region (ptr), a value to search
// for (value), and the number of bytes (num) to search within.
#include "libft.h"

void	*ft_memchr(const void *ptr, int value, size_t num)
{
	const unsigned char	*byte_ptr;
	size_t				i;

	byte_ptr = (const unsigned char *)ptr;
	i = 0;
	while (i < num)
	{
		i++;
		if (*byte_ptr == (unsigned char)value)
			return ((void *)byte_ptr);
		byte_ptr++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
#include <assert.h>

void *ft_memchr(const void *s, int c, size_t n);

int main() {
    char test_string[] = "Hello, World!";
    size_t test_length = strlen(test_string);

    void *ft_result_1 = ft_memchr(test_string, 'o', test_length);
    void *memchr_result_1 = memchr(test_string, 'o', test_length);
    printf("Test 1: Searching for 'o'\n");
    printf("ft_memchr result: %p\n", ft_result_1);
    printf("memchr result: %p\n", memchr_result_1);
    assert(ft_result_1 == memchr_result_1);
    printf("Test 1 passed!\n\n");

    void *ft_result_2 = ft_memchr(test_string, 'W', test_length);
    void *memchr_result_2 = memchr(test_string, 'W', test_length);
    printf("Test 2: Searching for 'W'\n");
    printf("ft_memchr result: %p\n", ft_result_2);
    printf("memchr result: %p\n", memchr_result_2);
    assert(ft_result_2 == memchr_result_2);
    printf("Test 2 passed!\n\n");

    void *ft_result_3 = ft_memchr(test_string, 'x', test_length);
    void *memchr_result_3 = memchr(test_string, 'x', test_length);
    printf("Test 3: Searching for 'x'\n");
    printf("ft_memchr result: %p\n", ft_result_3);
    printf("memchr result: %p\n", memchr_result_3);
    assert(ft_result_3 == memchr_result_3);
    printf("Test 3 passed!\n\n");

    void *ft_result_4 = ft_memchr(test_string, '\0', test_length);
    void *memchr_result_4 = memchr(test_string, '\0', test_length);
    printf("Test 4: Searching for '\\0'\n");
    printf("ft_memchr result: %p\n", ft_result_4);
    printf("memchr result: %p\n", memchr_result_4);
    assert(ft_result_4 == memchr_result_4);
    printf("Test 4 passed!\n\n");

    void *ft_result_5 = ft_memchr(test_string, 'H', 1);
    void *memchr_result_5 = memchr(test_string, 'H', 1);
    printf("Test 5: Searching for 'H' with n = 1\n");
    printf("ft_memchr result: %p\n", ft_result_5);
    printf("memchr result: %p\n", memchr_result_5);
    assert(ft_result_5 == memchr_result_5);
    printf("Test 5 passed!\n\n");

    void *ft_result_6 = ft_memchr(test_string, '!', test_length);
    void *memchr_result_6 = memchr(test_string, '!', test_length);
    printf("Test 6: Searching for '!'\n");
    printf("ft_memchr result: %p\n", ft_result_6);
    printf("memchr result: %p\n", memchr_result_6);
    assert(ft_result_6 == memchr_result_6);
    printf("Test 6 passed!\n\n");

    void *ft_result_7 = ft_memchr(test_string, ' ', test_length);
    void *memchr_result_7 = memchr(test_string, ' ', test_length);
    printf("Test 7: Searching for ' '\n");
    printf("ft_memchr result: %p\n", ft_result_7);
    printf("memchr result: %p\n", memchr_result_7);
    assert(ft_result_7 == memchr_result_7);
    printf("Test 7 passed!\n\n");

    void *ft_result_8 = ft_memchr(test_string, 'l', test_length);
    void *memchr_result_8 = memchr(test_string, 'l', test_length);
    printf("Test 8: Searching for 'l'\n");
    printf("ft_memchr result: %p\n", ft_result_8);
    printf("memchr result: %p\n", memchr_result_8);
    assert(ft_result_8 == memchr_result_8);
    printf("Test 8 passed!\n\n");

    void *ft_result_9 = ft_memchr(test_string, 'd', test_length);
    void *memchr_result_9 = memchr(test_string, 'd', test_length);
    printf("Test 9: Searching for 'd'\n");
    printf("ft_memchr result: %p\n", ft_result_9);
    printf("memchr result: %p\n", memchr_result_9);
    assert(ft_result_9 == memchr_result_9);
    printf("Test 9 passed!\n\n");

    void *ft_result_10 = ft_memchr(test_string, 'e', test_length);
    void *memchr_result_10 = memchr(test_string, 'e', test_length);
    printf("Test 10: Searching for 'e'\n");
    printf("ft_memchr result: %p\n", ft_result_10);
    printf("memchr result: %p\n", memchr_result_10);
    assert(ft_result_10 == memchr_result_10);
    printf("Test 10 passed!\n\n");

    printf("All test cases passed!\n");

    return 0;
}
*/
