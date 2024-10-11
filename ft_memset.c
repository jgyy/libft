/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 22:41:52 by jegoh             #+#    #+#             */
/*   Updated: 2023/09/03 13:06:30 by jgyy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// memset is a function in C that is used to fill a block of memory with a
// particular value.
#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned char	*byte_ptr;
	size_t			i;

	byte_ptr = (unsigned char *)ptr;
	i = 0;
	while (i < num)
	{
		*byte_ptr = (unsigned char)value;
		byte_ptr++;
		i++;
	}
	return (ptr);
}
/*
#include <stdio.h>
#include <string.h>
#include <assert.h>

void    *ft_memset(void *ptr, int value, size_t num);

int main() {
    char buffer1[20];
    char buffer2[20];

    ft_memset(buffer1, 'A', 10);
    memset(buffer2, 'A', 10);
    if (memcmp(buffer1, buffer2, 10) == 0) {
        printf("Test Case 1: Passed\n");
    } else {
        printf("Test Case 1: Failed\n");
    }

    ft_memset(buffer1, 0, 20);
    memset(buffer2, 0, 20);
    if (memcmp(buffer1, buffer2, 20) == 0) {
        printf("Test Case 2: Passed\n");
    } else {
        printf("Test Case 2: Failed\n");
    }

    ft_memset(buffer1, 0xFF, 5);
    memset(buffer2, 0xFF, 5);
    if (memcmp(buffer1, buffer2, 5) == 0) {
        printf("Test Case 3: Passed\n");
    } else {
        printf("Test Case 3: Failed\n");
    }

    ft_memset(buffer1, 'B', 15);
    memset(buffer2, 'B', 15);
    if (memcmp(buffer1, buffer2, 15) == 0) {
        printf("Test Case 4: Passed\n");
    } else {
        printf("Test Case 4: Failed\n");
    }

    ft_memset(buffer1, 0x00, 0);
    memset(buffer2, 0x00, 0);
    if (memcmp(buffer1, buffer2, 0) == 0) {
        printf("Test Case 5: Passed\n");
    } else {
        printf("Test Case 5: Failed\n");
    }

    ft_memset(buffer1, 0x7F, 10);
    memset(buffer2, 0x7F, 10);
    if (memcmp(buffer1, buffer2, 10) == 0) {
        printf("Test Case 6: Passed\n");
    } else {
        printf("Test Case 6: Failed\n");
    }

    ft_memset(buffer1, 'C', 7);
    memset(buffer2, 'C', 7);
    if (memcmp(buffer1, buffer2, 7) == 0) {
        printf("Test Case 7: Passed\n");
    } else {
        printf("Test Case 7: Failed\n");
    }

    ft_memset(buffer1, 0xAB, 20);
    memset(buffer2, 0xAB, 20);
    if (memcmp(buffer1, buffer2, 20) == 0) {
        printf("Test Case 8: Passed\n");
    } else {
        printf("Test Case 8: Failed\n");
    }

    ft_memset(buffer1, 0x12, 12);
    memset(buffer2, 0x12, 12);
    if (memcmp(buffer1, buffer2, 12) == 0) {
        printf("Test Case 9: Passed\n");
    } else {
        printf("Test Case 9: Failed\n");
    }

    ft_memset(buffer1, 'X', 20);
    memset(buffer2, 'X', 20);
    if (memcmp(buffer1, buffer2, 20) == 0) {
        printf("Test Case 10: Passed\n");
    } else {
        printf("Test Case 10: Failed\n");
    }

    return 0;
}
*/
