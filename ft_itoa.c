/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 14:14:03 by jegoh             #+#    #+#             */
/*   Updated: 2023/09/11 22:15:05 by jegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// itoa function converts an integer into a string.
#include "libft.h"

static int	int_length(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static char	*ft_strcpy(char *dest, const char *src)
{
	char	*original_dest;

	original_dest = dest;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (original_dest);
}

static char	*convert_to_str(int n, char *str, int len)
{
	int	is_negative;

	is_negative = (n < 0);
	str[len] = '\0';
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (n == INT_MIN)
	{
		ft_strcpy(str, "-2147483648");
		return (str);
	}
	if (is_negative)
	{
		n = -n;
		str[0] = '-';
	}
	while (n)
	{
		str[--len] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;

	len = int_length(n);
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	return (convert_to_str(n, str, len));
}
/*
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <string.h>

int is_null_terminated(const char *str) {
    if (str == NULL)
        return (0);
    for (int i = 0; str[i] != '\0'; i++)
        return (0);
    return (1);
}

char *itoa_simple(int value, char *str, int base) {
    if (base != 10)
        return NULL;
    sprintf(str, "%d", value);
    return str;
}

void test_ft_itoa_case(int value) {
    char buffer1[50];
    char *result_ft_itoa = ft_itoa(value);
    char *result_itoa = itoa_simple(value, buffer1, 10);

	if (is_null_terminated(result_ft_itoa))
		printf("FAIL: your ft_itoa string is not null terminated\n");
	else if (strcmp(result_ft_itoa, result_itoa) == 0)
		printf("PASS: ft_itoa(%d) = %s\n", value, result_ft_itoa);
	else
        printf("FAIL: ft_itoa(%d) = %s, expected %s\n",
			value, result_ft_itoa, result_itoa);

    free(result_ft_itoa);
}

void test_ft_itoa() {
    test_ft_itoa_case(0);
    test_ft_itoa_case(-1);
    test_ft_itoa_case(1);
    test_ft_itoa_case(INT_MAX);
    test_ft_itoa_case(INT_MIN);
    test_ft_itoa_case(123456);
    test_ft_itoa_case(-123456);
    test_ft_itoa_case(42);
    test_ft_itoa_case(100000);
    test_ft_itoa_case(-99999);
    test_ft_itoa_case(314159);
    test_ft_itoa_case(-271828);
    test_ft_itoa_case(5050);
    test_ft_itoa_case(-5050);
    test_ft_itoa_case(2);
    test_ft_itoa_case(-2);
    test_ft_itoa_case(10);
    test_ft_itoa_case(987654);
    test_ft_itoa_case(-111111);
    test_ft_itoa_case(55555);

    printf("\nAll tests executed!\n");
}

int main() {
    test_ft_itoa();
    return 0;
}
*/
