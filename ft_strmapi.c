/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 14:33:39 by jegoh             #+#    #+#             */
/*   Updated: 2023/09/08 13:58:18 by jgyy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Applies the function ’f’ to each character of the string ’s’ to create a
// new string (with malloc(3)) resulting from successive applications of ’f’.
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	length;
	unsigned int	i;
	char			*result;

	if (s == NULL || f == NULL)
		return (NULL);
	length = 0;
	while (s[length] != '\0')
		length++;
	result = (char *)malloc(length + 1);
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[length] = '\0';
	return (result);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char));

int areStringsEqual(const char *str1, const char *str2) {
    return strcmp(str1, str2) == 0;
}

char appendOne(unsigned int index, char c) {
	printf("index: %u, c: %c\n", index, c);
	return c + 1;
}

char increment(unsigned int index, char c) {
	printf("index: %u, c: %c\n", index, c);
    return c + (char)index;
}

char toUpperCase(unsigned int index, char c) {
	printf("index: %u, c: %c\n", index, c);
    return (char)toupper((int)c);
}

char toLowerCase(unsigned int index, char c) {
	printf("index: %u, c: %c\n", index, c);
    return (char)tolower((int)c);
}

char identity(unsigned int index, char c) {
	printf("index: %u, c: %c\n", index, c);
    return c;
}

char doubleChar(unsigned int index, char c) {
	printf("index: %u, c: %c\n", index, c);
    return c == '\0' ? '\0' : c == ' ' ? ' ' : c * 2;
}

char convertToX(unsigned int index, char c) {
	printf("index: %u, c: %c\n", index, c);
    return 'X';
}

char alternateAB(unsigned int index, char c) {
	printf("index: %u, c: %c\n", index, c);
    return (index % 2 == 0) ? 'A' : 'B';
}

int main() {
    char *result1 = ft_strmapi("", appendOne);
    if (areStringsEqual(result1, "")) {
        printf("Test Case 1: Passed (Empty string)\n");
    } else {
        printf("Test Case 1: Failed (Empty string)\n");
    }
    free(result1);

    char *result2 = ft_strmapi(NULL, appendOne);
    if (result2 == NULL) {
        printf("Test Case 2: Passed (NULL string)\n");
    } else {
        printf("Test Case 2: Failed (NULL string)\n");
    }

    char *result3 = ft_strmapi("hello", toUpperCase);
    if (areStringsEqual(result3, "HELLO")) {
        printf("Test Case 3: Passed (Uppercase conversion)\n");
    } else {
        printf("Test Case 3: Failed (Uppercase conversion)\n");
    }
    free(result3);

    char *result4 = ft_strmapi("WORLD", toLowerCase);
    if (areStringsEqual(result4, "world")) {
        printf("Test Case 4: Passed (Lowercase conversion)\n");
    } else {
        printf("Test Case 4: Failed (Lowercase conversion)\n");
    }
    free(result4);

    char *result5 = ft_strmapi("abc", appendOne);
    if (areStringsEqual(result5, "bcd")) {
        printf("Test Case 5: Passed (Append '1')\n");
    } else {
        printf("Test Case 5: Failed (Append '1')\n");
    }
    free(result5);

    char *result6 = ft_strmapi("This is a long string", increment);
    if (areStringsEqual(result6, "Tuis!js!c!orqt!vwxntk")) {
        printf("Test Case 6: Passed (Increment by position)\n");
    } else {
        printf("Test Case 6: Failed (Increment by position)\n");
    }
    free(result6);

    char *result7 = ft_strmapi("xyz", identity);
    if (areStringsEqual(result7, "xyz")) {
        printf("Test Case 7: Passed (Identity function)\n");
    } else {
        printf("Test Case 7: Failed (Identity function)\n");
    }
    free(result7);

    char *result8 = ft_strmapi(
		"A very long string with many characters.", doubleChar);
    if (strlen(result8) == 62) {
        printf("Test Case 8: Passed (Double characters)\n");
    } else {
        printf("Test Case 8: Failed (Double characters)\n");
    }
    free(result8);

    char *result9 = ft_strmapi("hello", convertToX);
    if (areStringsEqual(result9, "XXXXX")) {
        printf("Test Case 9: Passed (Convert to 'X')\n");
    } else {
        printf("Test Case 9: Failed (Convert to 'X')\n");
    }
    free(result9);

    char *result10 = ft_strmapi("12345", alternateAB);
    if (areStringsEqual(result10, "ABA")) {
        printf("Test Case 10: Passed (Alternate 'A' and 'B')\n");
    } else {
        printf("Test Case 10: Failed (Alternate 'A' and 'B')\n");
    }
    free(result10);

    return 0;
}
*/
