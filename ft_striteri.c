/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:56:55 by jegoh             #+#    #+#             */
/*   Updated: 2023/09/07 19:36:11 by jgyy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Applies the function ’f’ on each character of the string passed as argument,
// passing its index as first argument. Each character is passed by
// address to ’f’ to be modified if necessary.
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
#include <stdio.h>
#include <string.h>

void test_function(unsigned int index, char *character) {
    printf("Index: %u, Character: %c\n", index, *character);
}

void    ft_striteri(char *s, void (*f)(unsigned int, char*));

int main() {
    char str1[] = "Hello, World!";
    char str2[] = "12345";
    char str3[] = "";
    char *str4 = NULL;
    char str5[] = "Test";
    char str6[] = "abcdefghijklmnopqrstuvwxyz";
    char str7[] = "1234567890";
    char str8[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
    char str9[] = " \t\n";
    char str10[] = "!@#$%^&*()_+{}[]:;<>,.?/";

    printf("Test Case 1:\n");
    ft_striteri(str1, test_function);

    printf("Test Case 2:\n");
    ft_striteri(str2, test_function);

    printf("Test Case 3:\n");
    ft_striteri(str3, test_function);

    printf("Test Case 4 (NULL string):\n");
    ft_striteri(str4, test_function);

    printf("Test Case 5:\n");
    ft_striteri(str5, test_function);

    printf("Test Case 6:\n");
    ft_striteri(str6, test_function);

    printf("Test Case 7:\n");
    ft_striteri(str7, test_function);

    printf("Test Case 8:\n");
    ft_striteri(str8, test_function);

    printf("Test Case 9:\n");
    ft_striteri(str9, test_function);

    printf("Test Case 10:\n");
    ft_striteri(str10, test_function);

    return 0;
}
*/
