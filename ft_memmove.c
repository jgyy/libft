/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 20:53:53 by jegoh             #+#    #+#             */
/*   Updated: 2023/09/10 20:37:29 by jegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// memmove is a standard C library function used to copy a specified number of
// bytes from a source memory location to a destination memory location, even
// if the source and destination regions overlap.
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dest;
	s = src;
	if (d == s)
		return (dest);
	if (s < d && s + n > d)
	{
		s += n;
		d += n;
		while (n--)
			*(--d) = *(--s);
	}
	else
	{
		while (n--)
			*d++ = *s++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
#include <assert.h>

void *ft_memmove(void *dest, const void *src, size_t n);

int main() {
    char str01[] = "Hello, World!";
    char str02[sizeof(str01)] = "Hello, World!";
    ft_memmove(str02, str01, sizeof(str01));
    assert(memmove(str01, str01, sizeof(str01)) == str01);
    printf("Test case 0 passed: exact string\n");

	char str1[] = "Hello, World!";
    char str2[sizeof(str1)];
    ft_memmove(str2, str1, sizeof(str1));
    assert(memmove(str1, str1, sizeof(str1)) == str1);
    printf("Test case 1 passed: Basic string copy\n");

    char str3[] = "Test case";
    char str4[sizeof(str3)];
    ft_memmove(str4, str3, sizeof(str3));
    assert(memmove(str3, str3, sizeof(str3)) == str3);
    printf("Test case 2 passed: Copying another string\n");

    char str5[] = "12345";
    char str6[sizeof(str5)];
    ft_memmove(str6, str5, sizeof(str5));
    assert(memmove(str5, str5, sizeof(str5)) == str5);
    printf("Test case 3 passed: Copying numbers as characters\n");

    char str7[] = "Hello";
    char str8[sizeof(str7)];
    ft_memmove(str8, str7, sizeof(str7));
    assert(memmove(str7, str7, sizeof(str7)) == str7);
    printf("Test case 4 passed: Copying a short string\n");

    char str9[] = "abcdef";
    char str10[sizeof(str9)];
    ft_memmove(str10, str9, sizeof(str9));
    assert(memmove(str9, str9, sizeof(str9)) == str9);
    printf("Test case 5 passed: Copying mixed characters\n");

    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[sizeof(arr1) / sizeof(arr1[0])];
    ft_memmove(arr2, arr1, sizeof(arr1));
    assert(memmove(arr1, arr1, sizeof(arr1)) == arr1);
    printf("Test case 6 passed: Copying an array of integers\n");

    double arr3[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double arr4[sizeof(arr3) / sizeof(arr3[0])];
    ft_memmove(arr4, arr3, sizeof(arr3));
    assert(memmove(arr3, arr3, sizeof(arr3)) == arr3);
    printf("Test case 7 passed: Copying an array of doubles\n");

    char empty_str1[] = "";
    char empty_str2[sizeof(empty_str1)];
    ft_memmove(empty_str2, empty_str1, sizeof(empty_str1));
    assert(memmove(empty_str1, empty_str1, sizeof(empty_str1)) == empty_str1);
    printf("Test case 8 passed: Copying an empty string\n");

    char long_str1[] = "This is a long string with many characters.";
    char long_str2[sizeof(long_str1)];
    ft_memmove(long_str2, long_str1, sizeof(long_str1));
    assert(memmove(long_str1, long_str1, sizeof(long_str1)) == long_str1);
    printf("Test case 9 passed: Copying a long string\n");

    char overlap_str[] = "Overlapping Test";
    ft_memmove(overlap_str + 5, overlap_str, 10);
    memmove(overlap_str + 5, overlap_str, 10);
    printf("Test case 10 passed: Overlapping copy\n");

    printf("All test cases passed!\n");

    return 0;
}
*/
