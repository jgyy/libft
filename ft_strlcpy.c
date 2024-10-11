/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 11:34:44 by jegoh             #+#    #+#             */
/*   Updated: 2023/09/10 21:08:59 by jegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// strlcpy function is commonly used to copy strings while ensuring that the
// destination buffer doesn't overflow.
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	src_len;
	size_t	copy_len;
	size_t	i;

	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (size > 0)
		copy_len = size - 1;
	else
		copy_len = 0;
	i = 0;
	while (i < copy_len && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (size != 0)
		dest[i] = '\0';
	return (src_len);
}
/*
#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <assert.h>

void test_ft_strlcpy() {
    char src[] = "Hello, world!";
    char dest1[50];
    char dest2[50];

    printf("Test 1: Normal copy\n");
    assert(strlcpy(dest1, src, sizeof(dest1))
		== ft_strlcpy(dest2, src, sizeof(dest2)));
    assert(strcmp(dest1, dest2) == 0);

    printf("Test 2: Zero size\n");
    assert(strlcpy(dest1, src, 0) == ft_strlcpy(dest2, src, 0));

    printf("Test 3: Size less than source length\n");
    assert(strlcpy(dest1, src, 5) == ft_strlcpy(dest2, src, 5));
    assert(strcmp(dest1, dest2) == 0);

    printf("Test 4: Size is 1\n");
    assert(strlcpy(dest1, src, 1) == ft_strlcpy(dest2, src, 1));
    assert(strcmp(dest1, dest2) == 0);

    printf("Test 5: Empty source\n");
    assert(strlcpy(dest1, "", sizeof(dest1))
		== ft_strlcpy(dest2, "", sizeof(dest2)));
    assert(strcmp(dest1, dest2) == 0);

    printf("Test 20: Large size but small string\n");
    assert(strlcpy(dest1, "abc", 1000) == ft_strlcpy(dest2, "abc", 1000));
    assert(strcmp(dest1, dest2) == 0);
}

int main() {
    test_ft_strlcpy();
    printf("All tests passed!\n");
    return 0;
}
*/
