/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 11:35:35 by jegoh             #+#    #+#             */
/*   Updated: 2023/08/29 23:47:53 by jgyy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Split is meant to split a given string into an array of strings using a
// specified delimiter character.
#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s == c)
			in_word = 0;
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}
		s++;
	}
	return (count);
}

static char	*extract_word(char const **s, char c)
{
	int		len;
	int		i;
	char	*word;

	while (**s && **s == c)
		(*s)++;
	len = 0;
	while ((*s)[len] && (*s)[len] != c)
		len++;
	word = (char *)malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = *(*s)++;
		i++;
	}
	word[len] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		word_count;
	int		i;
	int		j;
	char	**result;

	word_count = count_words(s, c);
	result = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = -1;
	while (++i < word_count)
	{
		result[i] = extract_word(&s, c);
		if (!result[i])
		{
			j = -1;
			while (++j < i)
				free(result[j]);
			free(result);
			return (NULL);
		}
	}
	result[word_count] = NULL;
	return (result);
}
/*
#include <stdio.h>
#include <string.h>

char    **ft_split(char const *s, char c);

int compare_string_arrays(char **arr1, char **arr2) {
    for (int i = 0; arr1[i] != NULL || arr2[i] != NULL; i++) {
        if (arr1[i] == NULL && arr2[i] == NULL) {
            return 1;
        } else if (arr1[i] == NULL || arr2[i] == NULL) {
            printf("Arrays differ at index %d\n", i);
            return 0;
        } else if (strcmp(arr1[i], arr2[i]) != 0) {
            printf("Strings at index %d differ: \"%s\" vs \"%s\"\n",
				i, arr1[i], arr2[i]);
            return 0;
        }
        printf("Strings at index %d: \"%s\" vs \"%s\"\n", i, arr1[i], arr2[i]);
    }
    return 1;  // Arrays are equal
}

int main() {
    char **result;

    result = ft_split("Hello World", ' ');
    char *expected1[] = {"Hello", "World", NULL};
    if (compare_string_arrays(result, expected1)) {
        printf("Test Case 1: Passed\n");
    } else {
        printf("Test Case 1: Failed\n");
    }

    result = ft_split("Split,this,string", ',');
    char *expected2[] = {"Split", "this", "string", NULL};
    if (compare_string_arrays(result, expected2)) {
        printf("Test Case 2: Passed\n");
    } else {
        printf("Test Case 2: Failed\n");
    }

    result = ft_split("One Two Three", ' ');
    char *expected3[] = {"One", "Two", "Three", NULL};
    if (compare_string_arrays(result, expected3)) {
        printf("Test Case 3: Passed\n");
    } else {
        printf("Test Case 3: Failed\n");
    }

    result = ft_split("", ' ');
    char *expected4[] = {NULL};
    if (compare_string_arrays(result, expected4)) {
        printf("Test Case 4: Passed\n");
    } else {
        printf("Test Case 4: Failed\n");
    }

    result = ft_split("Single", ' ');
    char *expected5[] = {"Single", NULL};
    if (compare_string_arrays(result, expected5)) {
        printf("Test Case 5: Passed\n");
    } else {
        printf("Test Case 5: Failed\n");
    }

    result = ft_split("1,2,3,4,5", ',');
    char *expected6[] = {"1", "2", "3", "4", "5", NULL};
    if (compare_string_arrays(result, expected6)) {
        printf("Test Case 6: Passed\n");
    } else {
        printf("Test Case 6: Failed\n");
    }

    result = ft_split("One,,Three", ',');
    char *expected7[] = {"One", "Three", NULL};
    if (compare_string_arrays(result, expected7)) {
        printf("Test Case 7: Passed\n");
    } else {
        printf("Test Case 7: Failed\n");
    }

    result = ft_split("A-B-C-D", '-');
    char *expected8[] = {"A", "B", "C", "D", NULL};
    if (compare_string_arrays(result, expected8)) {
        printf("Test Case 8: Passed\n");
    } else {
        printf("Test Case 8: Failed\n");
    }

    result = ft_split("    Leading Spaces", ' ');
    char *expected9[] = {"Leading", "Spaces", NULL};
    if (compare_string_arrays(result, expected9)) {
        printf("Test Case 9: Passed\n");
    } else {
        printf("Test Case 9: Failed\n");
    }

    result = ft_split("Trailing Spaces    ", ' ');
    char *expected10[] = {"Trailing", "Spaces", NULL};
    if (compare_string_arrays(result, expected10)) {
        printf("Test Case 10: Passed\n");
    } else {
        printf("Test Case 10: Failed\n");
    }

    return 0;
}
*/
