/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 20:04:20 by jegoh             #+#    #+#             */
/*   Updated: 2023/09/10 18:34:44 by jegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allocates (with malloc(3)) and returns a substring from the string ’s’.
// The substring begins at index ’start’ and is of maximum size ’len’.
#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	str_len;
	char	*sub;

	i = 0;
	str_len = ft_strlen(s);
	if (start >= str_len)
		return (ft_strdup(""));
	if (str_len - start < len)
		len = str_len - start;
	sub = malloc(len + 1);
	if (!sub)
		return (NULL);
	while (i < len && s[start + i])
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
/*
#include "libft.h"
#include <assert.h>
#include <stdio.h>
#include <string.h>

char *substr(const char *s, size_t start, size_t len)
{
    size_t str_len = strlen(s);
    if (start >= str_len)
        return strdup("");

    if (str_len - start < len)
        len = str_len - start;

    return strndup(s + start, len);
}

void test_substr(char *s, int start, int len, int test_num)
{
	char	*res1 = ft_substr(s, start, len);
	char	*res2 = substr(s, start, len);

	if (strcmp(res1, res2) != 0)
	{
		printf("Test %d failed! For input s:'%s', start:%u, len:%u\n",
			test_num, s, start, len);
		printf("Expected: '%s'\nGot: '%s'\n", res2, res1);
	}
	else
	{
		printf("Test %d passed! For input s:'%s', start:%u, len:%u\n",
			test_num, s, start, len);
		printf("Expected: '%s'\nGot: '%s'\n", res2, res1);
	}
	free(res1);
	free(res2);
}

void test_ft_substr()
{
    test_substr("Hello, World!", 0, 5, 1);
    test_substr("Hello, World!", 7, 5, 2);
    test_substr("", 0, 1, 3);
    test_substr("Hi", 100, 5, 4);
    test_substr("abcdefghijkl", 2, 3, 5);
    test_substr("abcdefg", 0, 100, 6);
    test_substr("testing", 3, 0, 7);
    test_substr("OpenAI", 5, 5, 8);
    test_substr("Complete", 8, 10, 9);
    test_substr("Middle", 2, 3, 10);
    test_substr("Case", 4, 5, 11);
    test_substr("Out of bounds", 20, 1, 12);
    test_substr("Limit", 0, 0, 13);
    test_substr("Exact", 0, 5, 14);
    test_substr("Under", 5, 2, 15);
    test_substr("Over", 3, 10, 16);
    test_substr("Boundary", 8, 1, 17);
    test_substr("Tests", 5, 0, 18);
    test_substr("Are", 2, 2, 19);
    test_substr("Complete", 0, 10, 20);
    printf("All tests passed!\n");
}

int main()
{
    test_ft_substr();
    return 0;
}
*/
