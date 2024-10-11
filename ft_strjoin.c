/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 20:23:24 by jegoh             #+#    #+#             */
/*   Updated: 2023/09/01 23:13:38 by jgyy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allocates (with malloc(3)) and returns a new
// string, which is the result of the concatenation of ’s1’ and ’s2’.
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	size_t	i;
	size_t	j;
	char	*result;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len_s1 = 0;
	while (s1[len_s1] != '\0')
		len_s1++;
	len_s2 = 0;
	while (s2[len_s2] != '\0')
		len_s2++;
	result = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (result == NULL)
		return (NULL);
	i = -1;
	while (++i < len_s1)
		result[i] = s1[i];
	j = -1;
	while (++j < len_s2)
		result[i + j] = s2[j];
	result[i + j] = '\0';
	return (result);
}
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

char *ft_strjoin(const char *s1, const char *s2);

int main() {
    const char *testCases[][3] = {
        {"Hello, ", "world!", "Hello, world!"},
        {"", "Testing", "Testing"},
        {"Concat", "", "Concat"},
        {"", "", ""},
        {"This is a ", "long string.", "This is a long string."},
        {"123", "456", "123456"},
        {"Alpha ", "Beta ", "Alpha Beta "},
        {"One", " Two", "One Two"},
        {"Open", "AI", "OpenAI"},
        {NULL, "Null test", NULL},
    };

    for (int i = 0; i < 10; i++) {
        const char *s1 = testCases[i][0];
        const char *s2 = testCases[i][1];
        const char *expectedResult = testCases[i][2];

        char *result = ft_strjoin(s1, s2);

        printf("Test case %d:\n", i + 1);
        printf("Input s1: \"%s\"\n", s1);
        printf("Input s2: \"%s\"\n", s2);
        printf("Expected result: \"%s\"\n", expectedResult);

        if (expectedResult == NULL) {
            assert(result == NULL);
            printf("Result: NULL\n");
            printf("Test Passed: Result is NULL (as expected)\n");
        } else if (result != NULL && strcmp(result, expectedResult) == 0) {
            printf("Result: \"%s\"\n", result);
            printf("Test Passed: Result matches expected value\n");
        } else {
            printf("Result: \"%s\"\n", result);
            printf("Test Failed: Result does not match expected value\n");
        }

        free(result);

        printf("\n");
    }

    return 0;
}
*/
