/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 23:04:04 by jegoh             #+#    #+#             */
/*   Updated: 2023/09/11 22:13:48 by jegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// bzero function is used to set a block of memory to zero
// (i.e., fill it with null bytes).
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n > 0)
	{
		*p = 0;
		p++;
		n--;
	}
}
/*
#include <stdio.h>
#include <string.h>
#include <assert.h>

void	ft_bzero(void *s, size_t n);

void run_test(const char *test_name, void *buffer, size_t size) {
    void *buffer_copy = malloc(size);
    memcpy(buffer_copy, buffer, size);

    ft_bzero(buffer, size);
    bzero(buffer_copy, size);

    if (memcmp(buffer, buffer_copy, size) == 0) {
        printf("[PASS] %s\n", test_name);
    } else {
        printf("[FAIL] %s\n", test_name);
    }

    free(buffer_copy);
}

int main() {
    char buffer1[10];
    char buffer2[20];
    int buffer3[5];
    double buffer4[8];
    long buffer5[15];
    short buffer6[12];
    unsigned char buffer7[6];
    unsigned int buffer8[3];
    float buffer9[7];
    long double buffer10[10];

    run_test("Test case 1", buffer1, sizeof(buffer1));
    run_test("Test case 2", buffer2, sizeof(buffer2));
    run_test("Test case 3", buffer3, sizeof(buffer3));
    run_test("Test case 4", buffer4, sizeof(buffer4));
    run_test("Test case 5", buffer5, sizeof(buffer5));
    run_test("Test case 6", buffer6, sizeof(buffer6));
    run_test("Test case 7", buffer7, sizeof(buffer7));
    run_test("Test case 8", buffer8, sizeof(buffer8));
    run_test("Test case 9", buffer9, sizeof(buffer9));
    run_test("Test case 10", buffer10, sizeof(buffer10));

    return 0;
}
*/
