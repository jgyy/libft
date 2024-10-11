/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 19:50:38 by jegoh             #+#    #+#             */
/*   Updated: 2023/08/31 23:19:10 by jgyy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// strdup function that calculates the length of the input string by iterating
// over it character by character until it encounters the null terminator
// ('\0'). Afterwards it memory allocate and duplicate the input.
#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		length;
	int		i;
	char	*new_str;

	length = 0;
	while (str[length] != '\0')
		length++;
	new_str = (char *)malloc((length + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (i <= length)
	{
		new_str[i] = str[i];
		i++;
	}
	return (new_str);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

char *ft_strdup(const char *source);

int main() {
    const char *test_strings[] = {
        "Hello, world!",
        "Test",
        "",
        "1234567890",
        "Lorem ipsum dolor sit amet",
        "abcdefghijklmnopqrstuvwxyz",
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ",
        "0123456789",
        "Special characters: !@#$%^&*()",
        "Tabs\tand\nnewlines",
    };

    for (unsigned long i = 0;
		i < sizeof(test_strings) / sizeof(test_strings[0]); i++) {
        const char *original = test_strings[i];

        char *duplicate_ft = ft_strdup(original);
        char *duplicate_std = strdup(original);

        if (strcmp(duplicate_ft, duplicate_std) == 0) {
            printf("Test %lu pass: Duplicate(ft_strdup): \"%s\"\n",
				i + 1, duplicate_ft);
        } else {
            printf("Test %lu fail: Duplicate(strdup): \"%s\"\n",
                   i + 1, duplicate_std);
        }

        free(duplicate_ft);
        free(duplicate_std);
    }

    printf("All test cases completed.\n");
    return 0;
}
*/
