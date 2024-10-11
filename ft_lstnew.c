/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 20:08:06 by jegoh             #+#    #+#             */
/*   Updated: 2023/09/10 18:17:01 by jegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allocates (with malloc(3)) and returns a new element. The variable
// ’content’ is initialized with the value of the parameter ’content’. The
// variable ’next’ is initialized to NULL.
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <math.h>

t_list *ft_lstnew(void *content);

int main(void)
{
    char *str1 = strdup("Hello World");
    t_list *node1 = ft_lstnew(str1);
    if (node1 && node1->content == str1 && node1->next == NULL)
        printf("Test 1: Normal Case Passed\n");
    else
        printf("Test 1: Normal Case Failed\n");
    free(str1);
    free(node1);

    t_list *node2 = ft_lstnew(NULL);
    if (node2 && node2->content == NULL && node2->next == NULL)
        printf("Test 2: NULL Content Passed\n");
    else
        printf("Test 2: NULL Content Failed\n");
    free(node2);

    int *num = malloc(sizeof(int));
    *num = 42;
    t_list *node4 = ft_lstnew(num);
    if (node4 && *(int *)node4->content == 42 && node4->next == NULL)
        printf("Test 4: Integers Passed\n");
    else
        printf("Test 4: Integers Failed\n");
    free(num);
    free(node4);

    char *str5 = strdup("");
    t_list *node5 = ft_lstnew(str5);
    if (node5 && strcmp(node5->content, "") == 0 && node5->next == NULL)
        printf("Test 5: Empty String Passed\n");
    else
        printf("Test 5: Empty String Failed\n");
    free(str5);
    free(node5);

    char *str6 = strdup("A long string just to make sure everything works.");
    t_list *node6 = ft_lstnew(str6);
    if (node6 && strcmp(node6->content, str6) == 0 && node6->next == NULL)
        printf("Test 6: Long String Passed\n");
    else
        printf("Test 6: Long String Failed\n");
    free(str6);
    free(node6);

    typedef struct
    {
        int age;
        char name[50];
    } t_person;
    t_person *person = malloc(sizeof(t_person));
    person->age = 25;
    strcpy(person->name, "Alice");
    t_list *node7 = ft_lstnew(person);
    if (node7 && ((t_person *)node7->content)->age == 25
		&& strcmp(((t_person *)node7->content)->name, "Alice") == 0
		&& node7->next == NULL)
        printf("Test 7: Struct Content Passed\n");
    else
        printf("Test 7: Struct Content Failed\n");
    free(person);
    free(node7);

    char *str8a = strdup("Node 1");
    char *str8b = strdup("Node 2");
    t_list *node8a = ft_lstnew(str8a);
    t_list *node8b = ft_lstnew(str8b);
    if (node8a && node8b && node8a->next == NULL && node8b->next == NULL)
        printf("Test 8: Multiple Nodes Creation Passed\n");
    else
        printf("Test 8: Multiple Nodes Creation Failed\n");
    free(str8a);
    free(str8b);
    free(node8a);
    free(node8b);

    char *str9a = strdup("Node 1");
    char *str9b = strdup("Node 2");
    t_list *node9a = ft_lstnew(str9a);
    t_list *node9b = ft_lstnew(str9b);
    node9a->next = node9b;
    if (node9a->next == node9b)
        printf("Test 9: Node Linking Passed\n");
    else
        printf("Test 9: Node Linking Failed\n");
    free(str9a);
    free(str9b);
    free(node9a);
    free(node9b);

    float *f = malloc(sizeof(float));
    *f = 3.14;
    t_list *node10 = ft_lstnew(f);
    if (node10 && fabs(*(float *)node10->content - 3.14) < 1e-6
		&& node10->next == NULL)
        printf("Test 10: Floating Point Passed\n");
    else
        printf("Test 10: Floating Point Failed\n");
    free(f);
    free(node10);

    return 0;
}
*/
