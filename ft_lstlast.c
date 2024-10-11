/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 21:22:35 by jegoh             #+#    #+#             */
/*   Updated: 2023/09/10 18:15:42 by jegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Returns the last element of the list.
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/*
#include <stdio.h>

t_list *ft_lstlast(t_list *lst);

int main() {
    printf("Running test cases for ft_lstlast:\n\n");

    t_list *lst1 = NULL;
    t_list *last1 = ft_lstlast(lst1);
    printf("Test Case 1: Empty List\n");
    printf("Expected last: NULL\n");
    printf("Actual last: %p\n\n", (void *)last1);

    t_list node2 = {.content = (void *)42, .next = NULL};
    t_list *lst2 = &node2;
    t_list *last2 = ft_lstlast(lst2);
    printf("Test Case 2: Single Node List\n");
    printf("Expected last: %p\n", (void *)&node2);
    printf("Actual last: %p\n\n", (void *)last2);

    t_list node3_1 = {.content = (void *)10, .next = NULL};
    t_list node3_2 = {.content = (void *)20, .next = NULL};
    t_list node3_3 = {.content = (void *)30, .next = NULL};
    node3_1.next = &node3_2;
    node3_2.next = &node3_3;
    t_list *lst3 = &node3_1;
    t_list *last3 = ft_lstlast(lst3);
    printf("Test Case 3: Multiple Nodes List\n");
    printf("Expected last: %p\n", (void *)&node3_3);
    printf("Actual last: %p\n\n", (void *)last3);

    t_list nodes[100];
    for (int i = 0; i < 99; ++i) {
        nodes[i].content = (void *)(intptr_t)i;
        nodes[i].next = &nodes[i + 1];
    }
    nodes[99].content = (void *)99;
    nodes[99].next = NULL;
    t_list *lst4 = &nodes[0];
    t_list *last4 = ft_lstlast(lst4);
    printf("Test Case 4: Large List\n");
    printf("Expected last: %p\n", (void *)&nodes[99]);
    printf("Actual last: %p\n\n", (void *)last4);

    t_list node5_1 = {.content = (void *)5, .next = NULL};
    t_list node5_2 = {.content = (void *)10, .next = NULL};
    node5_1.next = &node5_2;
    node5_2.next = NULL; // Last node's next is NULL
    t_list *lst5 = &node5_1;
    t_list *last5 = ft_lstlast(lst5);
    printf("Test Case 5: List with NULL Pointers\n");
    printf("Expected last: %p\n", (void *)&node5_2);
    printf("Actual last: %p\n\n", (void *)last5);

    t_list node6_1 = {.content = (void *)3, .next = NULL};
    t_list node6_2 = {.content = (void *)6, .next = NULL};
    t_list node6_3 = {.content = (void *)9, .next = NULL};
    node6_1.next = NULL;
    node6_2.next = &node6_3;
    node6_3.next = NULL;
    t_list *lst6 = &node6_1;
    t_list *last6 = ft_lstlast(lst6);
    printf("Test Case 6: List with Interleaved NULL Pointers\n");
    printf("Expected last: %p\n", (void *)&node6_3);
    printf("Actual last: %p\n\n", (void *)last6);

	t_list node7_1 = {.content = (void *)50, .next = NULL};
	t_list node7_2 = {.content = (void *)100, .next = NULL};
	node7_1.next = &node7_2;
	node7_2.next = NULL;
	t_list *lst7 = &node7_1;
	t_list *last7 = ft_lstlast(lst7);
	printf("Test Case 7: List with Circular Reference (Corrected)\n");
	printf("Expected last: %p\n", (void *)&node7_2);
	printf("Actual last: %p\n\n", (void *)last7);

    int num8 = 42;
    char c8 = 'A';
    float f8 = 3.14;
    t_list node8_1 = {.content = &num8, .next = NULL};
    t_list node8_2 = {.content = &c8, .next = NULL};
    t_list node8_3 = {.content = &f8, .next = NULL};
    node8_1.next = &node8_2;
    node8_2.next = &node8_3;
    t_list *lst8 = &node8_1;
    t_list *last8 = ft_lstlast(lst8);
    printf("Test Case 8: List with Different Data Types\n");
    printf("Expected last: %p\n", (void *)&node8_3);
    printf("Actual last: %p\n\n", (void *)last8);

    typedef struct {
        int x;
        int y;
    } Point;
    Point p9_1 = {.x = 1, .y = 2};
    Point p9_2 = {.x = 3, .y = 4};
    t_list node9_1 = {.content = &p9_1, .next = NULL};
    t_list node9_2 = {.content = &p9_2, .next = NULL};
    node9_1.next = &node9_2;
    t_list *lst9 = &node9_1;
    t_list *last9 = ft_lstlast(lst9);
    printf("Test Case 9: List with Structured Data\n");
    printf("Expected last: %p\n", (void *)&node9_2);
    printf("Actual last: %p\n\n", (void *)last9);

    typedef struct {
        char name[20];
        int age;
    } Person;
    Person person10_1 = {.name = "Alice", .age = 25};
    Person person10_2 = {.name = "Bob", .age = 30};
    t_list node10_1 = {.content = &person10_1, .next = NULL};
    t_list node10_2 = {.content = &person10_2, .next = NULL};
    node10_1.next = &node10_2;
    t_list *lst10 = &node10_1;
    t_list *last10 = ft_lstlast(lst10);
    printf("Test Case 10: List with Custom Data Structure\n");
    printf("Expected last: %p\n", (void *)&node10_2);
    printf("Actual last: %p\n\n", (void *)last10);

    return 0;
}
*/
