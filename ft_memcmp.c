/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 23:47:08 by jegoh             #+#    #+#             */
/*   Updated: 2023/08/31 22:28:50 by jgyy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The function iterates through the memory regions byte by byte, comparing
// the corresponding bytes from each memory region.
#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	const unsigned char	*byte_ptr1;
	const unsigned char	*byte_ptr2;

	byte_ptr1 = ptr1;
	byte_ptr2 = ptr2;
	while (num--)
	{
		if (*byte_ptr1 != *byte_ptr2)
			return (*byte_ptr1 - *byte_ptr2);
		byte_ptr1++;
		byte_ptr2++;
	}
	return (0);
}
/*
#include <assert.h>
#include <string.h>
#include <stdio.h>

int ft_memcmp(const void *ptr1, const void *ptr2, size_t num);

void test_ft_memcmp() {
    char str1[] = "Hello";
    printf("Test 1: Comparing two identical strings... ");
    assert(ft_memcmp(str1, str1, 5) == memcmp(str1, str1, 5));
    printf("Passed!\n");

    char str2[] = "World";
    printf("Test 2: Comparing two different strings... ");
    assert(ft_memcmp(str1, str2, 5) == memcmp(str1, str2, 5));
    printf("Passed!\n");

    char str3[] = "";
    printf("Test 3: Comparing with an empty string... ");
    assert(ft_memcmp(str1, str3, 0) == memcmp(str1, str3, 0));
    printf("Passed!\n");

    unsigned char arr1[] = {1, 2, 3, 4, 5};
    printf("Test 4: Comparing two identical arrays... ");
    assert(ft_memcmp(arr1, arr1, 5) == memcmp(arr1, arr1, 5));
    printf("Passed!\n");

    unsigned char arr2[] = {5, 4, 3, 2, 1};
    printf("Test 5: Comparing two different arrays... ");
    assert(ft_memcmp(arr1, arr2, 5) == memcmp(arr1, arr2, 5));
    printf("Passed!\n");

    char str4[] = "Hel";
    printf("Test 6: Comparing a prefix... ");
    assert(ft_memcmp(str1, str4, 3) == memcmp(str1, str4, 3));
    printf("Passed!\n");

    char str5[] = "Hell";
    printf("Test 7: Compare 2 strs with different lengths but same prefix");
    assert(ft_memcmp(str1, str5, 5) == memcmp(str1, str5, 5));
    printf("Passed!\n");

    char str6[] = "HelloWorld";
    printf("Test 8: Comparing two identical strings of different length... ");
    assert(ft_memcmp(str1, str6, 5) == memcmp(str1, str6, 5));
    printf("Passed!\n");

    char str7[] = "ZZHelloZZ";
    printf("Test 9: Comparing the middle of two strings... ");
    assert(ft_memcmp(str1, str7 + 2, 5) == memcmp(str1, str7 + 2, 5));
    printf("Passed!\n");

    int num1 = 100;
    double num2 = 200.5;
    printf("Test 10: Comparing two completely different types of data... ");
    assert(ft_memcmp(&num1, &num2, sizeof(int))
		== memcmp(&num1, &num2, sizeof(int)));
    printf("Passed!\n");

    printf("All tests passed for ft_memcmp!\n");
}

int main() {
    test_ft_memcmp();
    return 0;
}
*/
