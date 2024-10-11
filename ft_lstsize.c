/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 21:10:09 by jegoh             #+#    #+#             */
/*   Updated: 2023/09/10 18:17:49 by jegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Counts the number of elements in a list.
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

int ft_lstsize(t_list *lst);

int main()
{
    t_list *lst = NULL;
    assert(ft_lstsize(lst) == 0);
    printf("Test 1 passed: Empty list has size 0.\n");

    t_list node;
    node.content = "content";
    node.next = NULL;
    assert(ft_lstsize(&node) == 1);
    printf("Test 2 passed: Single node list has size 1.\n");

    t_list node2 = {"content2", NULL};
    t_list node1 = {"content1", &node2};
    assert(ft_lstsize(&node1) == 2);
    printf("Test 3 passed: Two node list has size 2.\n");

    t_list node3_mult = {"content3", NULL};
    t_list node2_mult = {"content2", &node3_mult};
    t_list node1_mult = {"content1", &node2_mult};
    assert(ft_lstsize(&node1_mult) == 3);
    printf("Test 4 passed: Three node list has size 3.\n");

    t_list node_content = {"original", NULL};
    ft_lstsize(&node_content);
    assert(strcmp(node_content.content, "original") == 0);
    printf("Test 5 passed: Function does not alter list content.\n");

    t_list node_head = {"content", NULL};
    t_list *head = &node_head;
    ft_lstsize(head);
    assert(head == &node_head);
    printf("Test 6 passed: Function does not alter head pointer.\n");

    t_list nodes[1000];
    for(int i = 0; i < 999; i++) {
        nodes[i].content = "content";
        nodes[i].next = &nodes[i+1];
    }
    nodes[999].next = NULL;
    assert(ft_lstsize(&nodes[0]) == 1000);
    printf("Test 7 passed: Long list of 1000 nodes has size 1000.\n");

    t_list node2_same = {"same", NULL};
    t_list node1_same = {"same", &node2_same};
    assert(ft_lstsize(&node1_same) == 2);
    printf("Test 8 passed: Two nodes with identical content have size 2.\n");

    int int_content = 123;
    t_list node3_mixed = {&int_content, NULL};
    t_list node2_mixed = {NULL, &node3_mixed};
    t_list node1_mixed = {"string", &node2_mixed};
    assert(ft_lstsize(&node1_mixed) == 3);
    printf("Test 9 passed: List with mixed content has size 3.\n");

	t_list node2_invalid;
	t_list node1_invalid = {"content", &node2_invalid};
	node2_invalid.content = "last";
	node2_invalid.next = NULL;
	assert(ft_lstsize(&node1_invalid) == 2);
	printf("Test 10 passed: List with invalid last node pointer has size 2.\n");

    return 0;
}
*/
