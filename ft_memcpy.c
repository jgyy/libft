/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 20:09:36 by jegoh             #+#    #+#             */
/*   Updated: 2023/09/11 22:16:26 by jegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// memcpy function in C is used to copy a block of memory from one location
// to another.
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	size_t	i;

	d = (char *)dest;
	s = (char *)src;
	i = 0;
	while (&d[i] != &s[i] && i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*
#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <assert.h>

void test_ft_memcpy()
{
    printf("Test Case 1: Basic memcpy\n");
    char src1[] = "Hello, world!";
    char dest1[1001];
    char dest2[1001];
	memcpy(dest1, src1, strlen(src1) + 1);
	ft_memcpy(dest2, src1, strlen(src1) + 1);
	assert(strcmp(dest1, dest2) == 0);

    printf("Test Case 2: Empty src\n");
    char src2[] = "";
	memcpy(dest1, src2, strlen(src1) + 1);
	ft_memcpy(dest2, src2, strlen(src1) + 1);
    assert(strcmp(dest1, dest2) == 0);

    printf("Test Case 3: Large size\n");
    char src3[1001];
    for (int i = 0; i < 1000; i++) src3[i] = 'a';
    src3[1000] = '\0';
	memcpy(dest1, src3, strlen(src1) + 1);
	ft_memcpy(dest2, src3, strlen(src1) + 1);
	assert(strcmp(dest1, dest2) == 0);

    printf("Test Case 4: Size 0\n");
	memcpy(dest1, src1, 0);
	ft_memcpy(dest2, src1, 0);
    assert(strcmp(dest1, dest2) == 0);

    printf("Test Case 5: Non-terminated strings\n");
    char src5[] = "Hello";
    memcpy(dest1, src5, 4);
	ft_memcpy(dest2, src5, 4);
	assert(strncmp(dest1, dest2, 4) == 0);

    printf("Test Case 6: Copy integers\n");
    int int_src[] = {1, 2, 3, 4, 5};
    int int_dest1[5];
    int int_dest2[5];
    memcpy(int_dest1, int_src, sizeof(int_src));
	ft_memcpy(int_dest2, int_src, sizeof(int_src));
	assert(memcmp(int_dest1, int_dest2, sizeof(int_dest1)) == 0);

    printf("Test Case 7: Partially copying integers\n");
    memcpy(int_dest1, int_src, sizeof(int) * 3);
	ft_memcpy(int_dest2, int_src, sizeof(int) * 3);
	assert(memcmp(int_dest1, int_dest2, sizeof(int) * 3) == 0);

	printf("Test Case 8: Overlapping memory regions using memmove\n");
	char overlap_src[] = "abcdef";
	memmove(overlap_src + 1, overlap_src, 5);
	printf("Value of overlap_src after memmove: %s\n", overlap_src);
	assert(strcmp(overlap_src, "aabcde") == 0);

    printf("Test Case 9: Copying bytes\n");
    unsigned char byte_src[] = {0x00, 0xFF, 0x7F, 0x80};
    unsigned char byte_dest1[4];
    unsigned char byte_dest2[4];
    memcpy(byte_dest1, byte_src, sizeof(byte_src));
	ft_memcpy(byte_dest2, byte_src, sizeof(byte_src));
	assert(memcmp(byte_dest1, byte_dest2, sizeof(byte_dest1)) == 0);

    printf("Test Case 10: Copying long\n");
    long long_src[] = {0xFFFFFFFFFFFFFFFF, 0x0000000000000000};
    long long_dest1[2];
    long long_dest2[2];
    memcpy(long_dest1, long_src, sizeof(long_src));
	ft_memcpy(long_dest2, long_src, sizeof(long_src));
	assert(memcmp(long_dest1, long_dest2, sizeof(long_dest1)) == 0);

    printf("Test Case 11: Smallest possible copy\n");
    char tinySrc = 'A';
    char tinyDest1;
    char tinyDest2;
    memcpy(&tinyDest1, &tinySrc, 1);
	ft_memcpy(&tinyDest2, &tinySrc, 1);
	assert(tinyDest1 == tinyDest2);

    printf("Test Case 12: Non-string data (double)\n");
    double doubleSrc[] = {1.5, 2.5, 3.5};
    double doubleDest1[3];
    double doubleDest2[3];
	memcpy(doubleDest1, doubleSrc, sizeof(doubleSrc));
	ft_memcpy(doubleDest2, doubleSrc, sizeof(doubleSrc));
	for (int i = 0; i < 3; i++)
		assert(doubleDest1[i] == doubleDest2[i]);

    printf("Test Case 13: All zeros\n");
    char zeros[10] = {0};
    char destZeros1[10];
    char destZeros2[10];
    memcpy(destZeros1, zeros, 10);
	ft_memcpy(destZeros2, zeros, 10);
	assert(memcmp(destZeros1, destZeros2, 10) == 0);

    printf("Test Case 14: Copying to and from the same location\n");
    char same[] = "Same!";
    memcpy(same, same, 5);
	ft_memcpy(same, same, 5);
	assert(strcmp(same, "Same!") == 0);

    printf("Test Case 15: Long data\n");
    long longSrc[] = {123456789012345, -123456789012345};
    long longDest1[2];
    long longDest2[2];
    memcpy(longDest1, longSrc, sizeof(longSrc));
	ft_memcpy(longDest2, longSrc, sizeof(longSrc));
	assert(memcmp(longDest1, longDest2, sizeof(longDest1)) == 0);

    printf("Test Case 16: Copy only part of the middle\n");
    char middleSrc[] = "abcdef";
    char middleDest1[5] = {0};
    char middleDest2[5] = {0};
    memcpy(middleDest1, middleSrc + 1, 3);
	ft_memcpy(middleDest2, middleSrc + 1, 3);
	assert(strcmp(middleDest1, "bcd") == 0
		&& strcmp(middleDest1, middleDest2) == 0);

    printf("Test Case 17: Copying structs\n");
    struct testStruct {
        int intVal;
        double doubleVal;
    } structSrc = {5, 3.14}, structDest1, structDest2;
    memcpy(&structDest1, &structSrc, sizeof(structSrc));
	ft_memcpy(&structDest2, &structSrc, sizeof(structSrc));
	assert(structDest1.intVal == structSrc.intVal
		&& structDest1.doubleVal == structSrc.doubleVal);
    assert(structDest1.intVal == structDest2.intVal
		&& structDest1.doubleVal == structDest2.doubleVal);

    printf("Test Case 18: Alternate pattern bytes\n");
    unsigned char pattern[] = {0xAA, 0x55, 0xAA, 0x55, 0xAA};
    unsigned char patternDest1[5];
    unsigned char patternDest2[5];
    memcpy(patternDest1, pattern, 5);
	ft_memcpy(patternDest2, pattern, 5);
	assert(memcmp(patternDest1, patternDest2, 5) == 0);

	printf("Test Case 19: Copying backwards in memory\n");
	char backwards1[] = "abcdef";
	char backwards2[] = "abcdef";
	memcpy(backwards1 + 1, backwards1, 5);
	ft_memcpy(backwards2 + 1, backwards2, 5);
	printf("After system memcpy: %s\n", backwards1);
	printf("After ft_memcpy: %s\n", backwards2);
	assert(memcmp(backwards1, backwards2, 5) == 0);

    printf("Test Case 20: Large copies\n");
    char largeSrc[10000];
    char largeDest1[10000];
    char largeDest2[10000];
    for (int i = 0; i < 10000; i++) largeSrc[i] = i % 256;
    memcpy(largeDest1, largeSrc, 10000);
	ft_memcpy(largeDest2, largeSrc, 10000);
	assert(memcmp(largeDest1, largeDest2, 10000) == 0);
}

int main()
{
    test_ft_memcpy();
    printf("All tests passed!\n");
    return 0;
}
*/
