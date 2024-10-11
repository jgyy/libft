/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 19:35:29 by jegoh             #+#    #+#             */
/*   Updated: 2023/09/10 21:43:03 by jegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// calloc allocates memory using malloc and then manually initializes the
// allocated memory to zero by iterating over each byte of the allocated
// block and setting it to 0
#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	size_t	total_size;
	void	*ptr;

	total_size = num * size;
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, total_size);
	return (ptr);
}
/*
#include "libft.h"
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <stdio.h>

void test_ft_calloc() {
    printf("Test Case 1: Basic functionality\n");
    int *a = (int *)calloc(5, sizeof(int));
    int *b = (int *)ft_calloc(5, sizeof(int));
    for (int i = 0; i < 5; i++) {
        assert(a[i] == b[i]);
    }
    free(a);
    free(b);

    printf("Test Case 2: Allocation of 0 bytes\n");
    a = (int *)calloc(0, sizeof(int));
    b = (int *)ft_calloc(0, sizeof(int));
    free(a);
    free(b);

	printf("Test Case 3: Allocating a single byte\n");
	char *c = (char *)calloc(1, sizeof(char));
	char *d = (char *)ft_calloc(1, sizeof(char));
	assert(*c == *d);
	free(c);
	free(d);

	printf("Test Case 4: Allocating an array of strings\n");
	char **strs = (char **)calloc(5, sizeof(char *));
	char **ft_strs = (char **)ft_calloc(5, sizeof(char *));
	for (int i = 0; i < 5; i++) {
		assert(strs[i] == ft_strs[i]);
	}
	free(strs);
	free(ft_strs);

	printf("Test Case 5: Size 0, but number not 0\n");
	int *e = (int *)calloc(5, 0);
	int *f = (int *)ft_calloc(5, 0);
	free(e);
	free(f);

	printf("Test Case 6: Array of floats\n");
	float *g = (float *)calloc(5, sizeof(float));
	float *h = (float *)ft_calloc(5, sizeof(float));
	for (int i = 0; i < 5; i++) {
		assert(g[i] == h[i]);
	}
	free(g);
	free(h);

	printf("Test Case 7: Dynamic size allocation\n");
	size_t dynamic_size = 10;
	double *j = (double *)calloc(dynamic_size, sizeof(double));
	double *k = (double *)ft_calloc(dynamic_size, sizeof(double));
	for (size_t i = 0; i < dynamic_size; i++) {
		assert(j[i] == k[i]);
	}
	free(j);
	free(k);

	printf("Test Case 8: Allocating zero elements\n");
	void *l = calloc(0, sizeof(int));
	void *m = ft_calloc(0, sizeof(int));
	free(l);
	free(m);

	printf("Test Case 9: Large number but small size\n");
	char *n = (char *)calloc(1000000, 1);
	char *o = (char *)ft_calloc(1000000, 1);
	for (int i = 0; i < 1000000; i++) {
		assert(n[i] == o[i]);
	}
	free(n);
	free(o);

	printf("Test Case 10: Large size but number 1\n");
	long long *p = (long long *)calloc(1, sizeof(long long));
	long long *q = (long long *)ft_calloc(1, sizeof(long long));
	assert(*p == *q);
	free(p);
	free(q);

	printf("Test Case 11: Allocate 2D array\n");
	int **r = (int **)calloc(5, sizeof(int *));
	int **s = (int **)ft_calloc(5, sizeof(int *));
	for (int i = 0; i < 5; i++) {
    	assert(r[i] == s[i]);
	}
	free(r);
	free(s);

	printf("Test Case 12: Size of structs\n");
	struct TestStruct {
		int x;
		double y;
	};
	struct TestStruct *t = (struct TestStruct *)calloc(
		5, sizeof(struct TestStruct));
	struct TestStruct *u = (struct TestStruct *)ft_calloc(
		5, sizeof(struct TestStruct));
	for (int i = 0; i < 5; i++)
		assert(t[i].x == u[i].x && t[i].y == u[i].y);
	free(t);
	free(u);

	printf("Test Case 13: Check zero initialization\n");
	int *v = (int *)calloc(5, sizeof(int));
	int *w = (int *)ft_calloc(5, sizeof(int));
	for (int i = 0; i < 5; i++) {
		assert(v[i] == 0 && w[i] == 0);
	}
	free(v);
	free(w);

	printf("Test Case 14: calloc with both size and num as 0\n");
	void *x = calloc(0, 0);
	void *y = ft_calloc(0, 0);
	free(x);
	free(y);

	printf("Test Case 15: Allocating an array of longs\n");
	long *aa = (long *)calloc(5, sizeof(long));
	long *bb = (long *)ft_calloc(5, sizeof(long));
	for (int i = 0; i < 5; i++) {
		assert(aa[i] == bb[i]);
	}
	free(aa);
	free(bb);

	printf("Test Case 16: Check larger dynamic size allocation\n");
	dynamic_size = 100;
	short *cc = (short *)calloc(dynamic_size, sizeof(short));
	short *dd = (short *)ft_calloc(dynamic_size, sizeof(short));
	for (size_t i = 0; i < dynamic_size; i++) {
		assert(cc[i] == dd[i]);
	}
	free(cc);
	free(dd);

	printf("Test Case 17: Allocation of double with size 0\n");
	double *ee = (double *)calloc(0, sizeof(double));
	double *ff = (double *)ft_calloc(0, sizeof(double));
	free(ee);
	free(ff);

	printf("Test Case 18: Array of chars\n");
	char *gg = (char *)calloc(26, sizeof(char));
	char *hh = (char *)ft_calloc(26, sizeof(char));
	for (int i = 0; i < 26; i++) {
    	assert(gg[i] == hh[i]);
	}
	free(gg);
	free(hh);

	printf("Test Case 19: Allocation with large size but 0 count\n");
	void *ii = calloc(0, 100000);
	void *jj = ft_calloc(0, 100000);
	free(ii);
	free(jj);

    printf("Test Case 20: Large allocation\n");
    size_t large_size = 1000000;
    a = (int *)calloc(large_size, sizeof(int));
    b = (int *)ft_calloc(large_size, sizeof(int));
    for (size_t i = 0; i < large_size; i++) {
        assert(a[i] == b[i]);
    }
    free(a);
    free(b);
}

int main() {
    test_ft_calloc();
    printf("All tests passed!\n");
    return 0;
}
*/
