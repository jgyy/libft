/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 20:39:25 by jegoh             #+#    #+#             */
/*   Updated: 2023/09/11 22:17:43 by jegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters
// specified in ’set’ removed from the beginning and the end of the string.
#include "libft.h"

static int	is_in_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	size_t	i;
	char	*trimmed;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && is_in_set(s1[start], set))
		start++;
	end = 0;
	while (s1[end])
		end++;
	while (end > start && is_in_set(s1[end - 1], set))
		end--;
	len = end - start;
	trimmed = (char *)malloc(len + 1);
	if (!trimmed)
		return (NULL);
	i = -1;
	while (++i < len)
		trimmed[i] = s1[start + i];
	trimmed[len] = '\0';
	return (trimmed);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strtrim(char const *s1, char const *set);

void test_ft_strtrim(const char *input, const char *trim_set,
	const char *expected_output) {
    char *result = ft_strtrim(input, trim_set);
    if (result == NULL) {
        printf("FAIL: Input: \"%s\", Trim set: \"%s\", Result: NULL\n",
			input, trim_set);
    } else if (strcmp(result, expected_output) == 0) {
        printf("PASS: Input: \"%s\", Trim set: \"%s\", Result: \"%s\"\n",
			input, trim_set, result);
    } else {
        printf("FAIL: Input: %s, Trim set: %s, Expected: %s, Got: %s\n",
			input, trim_set, expected_output, result);
    }
    free(result);
}

int main() {
    test_ft_strtrim("  Hello, World!  ", " ", "Hello, World!");
    test_ft_strtrim("  Hello, World!  ", "H ", "ello, World!");
    test_ft_strtrim("  This is a test  ", "This is a test", "");
    test_ft_strtrim("  This is a test  ", "xyz", "  This is a test  ");
    test_ft_strtrim("", "", "");
    test_ft_strtrim("abc", "", "abc");
    test_ft_strtrim(NULL, "xyz", NULL);
    test_ft_strtrim("Test", NULL, "Test");
    test_ft_strtrim("    ", " ", "");
    test_ft_strtrim("ababababab", "ab", "");
    test_ft_strtrim("abchellocba", "abc", "hello");
    test_ft_strtrim("aaahelloaaa", "abc", "hello");

    return 0;
}
*/
