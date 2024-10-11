/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 12:17:57 by jegoh             #+#    #+#             */
/*   Updated: 2023/09/10 22:34:09 by jegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// strchr is used to find the first occurrence of a character in a string.
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	else
		return (NULL);
}
/*
#include "libft.h"
#include <assert.h>
#include <string.h>
#include <stdio.h>

void test_ft_strchr()
{
    char test1[] = "Hello, world!";
    char test2[] = "";
    char test3[] = "a";
    char test4[] = "This is a longer test string";

    char *tests[] = {test1, test2, test3, test4};
    char chars[] = {'H', 'o', 'z', '!', ',', 'H', '\0', 'a', 'b', '\0',
                    'T', 't', ' ', 'z', 'i', 's', 'g', 'r', 'n', 'x'};

    for (int i = 0; i < 20; i++) {
        printf("Running test %d... ", i + 1);
        if (ft_strchr(tests[i / 5], chars[i])
			== strchr(tests[i / 5], chars[i])) {
            printf("PASSED\n");
        } else {
            printf("FAILED\n");
        }
    }
}

int main() {
    test_ft_strchr();
    return 0;
}
*/
