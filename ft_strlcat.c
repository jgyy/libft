/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 12:01:40 by jegoh             #+#    #+#             */
/*   Updated: 2023/09/11 19:28:02 by jegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// strlcat is used for concatenating strings with size-bound checks.
#include "libft.h"

static char	*ft_strncat(char *dst, const char *src, size_t n)
{
	size_t	dst_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	total_len;
	size_t	space_left;
	size_t	to_copy;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	total_len = dst_len + src_len;
	if (size <= dst_len)
		return (src_len + size);
	space_left = size - dst_len - 1;
	if (src_len < space_left)
		to_copy = src_len;
	else
		to_copy = space_left;
	ft_strncat(dst + dst_len, src, to_copy);
	return (total_len);
}
/*
#include "libft.h"
#include <stdio.h>
#include <string.h>

int main() {
    char dest[50];
    const char *src = "Hello, ";
    size_t size;

    strcpy(dest, "");
    size = ft_strlcat(dest, src, 50);
    printf("Test Case 1: '%s', size=%zu\n", dest, size);

    strcpy(dest, "");
    size = ft_strlcat(dest, "world!", 5);
    printf("Test Case 2: '%s', size=%zu\n", dest, size);

    strcpy(dest, "");
    size = ft_strlcat(dest, "world!", 12);
    printf("Test Case 3: '%s', size=%zu\n", dest, size);

    strcpy(dest, "");
    size = ft_strlcat(dest, "Hello, world!", 12);
    printf("Test Case 4: '%s', size=%zu\n", dest, size);

    strcpy(dest, "");
    size = ft_strlcat(dest, "", 10);
    printf("Test Case 5: '%s', size=%zu\n", dest, size);

    strcpy(dest, "");
    size = ft_strlcat(dest, "Hello", 5);
    printf("Test Case 6: '%s', size=%zu\n", dest, size);

    return 0;
}
*/
