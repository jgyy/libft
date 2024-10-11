/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 21:43:12 by jegoh             #+#    #+#             */
/*   Updated: 2023/09/10 18:14:28 by jegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Takes as a parameter an element and frees the memory of the element’s
// content using the function ’del’ given as a parameter and free the element.
// The memory of ’next’ must not be freed.
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
}
/*
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void delete_string(void *data) {
    char *str_data = (char *)data;
    printf("Deleting string content: %s\n", str_data);
    free(str_data);
}

typedef struct {
    int x;
    int y;
} Point;

void delete_int(void *data) {
    if (data != NULL) {
        int *int_data = (int *)data;
        printf("Deleting integer content: %d\n", *int_data);
        free(int_data);
    }
}

void delete_point(void *data) {
    Point *point_data = (Point *)data;
    printf("Deleting Point content: (%d, %d)\n", point_data->x, point_data->y);
    free(point_data);
}

int main() {
    t_list *node1 = malloc(sizeof(t_list));
    int *data1 = malloc(sizeof(int));
    *data1 = 42;
    node1->content = data1;
    node1->next = NULL;

    printf("Test case 1: Deleting a single node with an integer content\n");
    ft_lstdelone(node1, delete_int);

    printf("Test case 2: Deleting a NULL node\n");
    ft_lstdelone(NULL, delete_int);

    t_list *node3 = malloc(sizeof(t_list));
    node3->content = NULL;
    node3->next = NULL;

    printf("Test case 3: Deleting a node with NULL content\n");
    ft_lstdelone(node3, delete_int);

    t_list *node4 = malloc(sizeof(t_list));
    char *data4 = strdup("Hello, World!");
    node4->content = data4;
    node4->next = NULL;

    printf("Test case 4: Deleting a node with string content\n");
    ft_lstdelone(node4, delete_string);

    t_list *node5 = malloc(sizeof(t_list));
    Point *data5 = malloc(sizeof(Point));
    data5->x = 10;
    data5->y = 20;
    node5->content = data5;
    node5->next = NULL;

    printf("Test case 5: Deleting a node with custom data type content\n");
    ft_lstdelone(node5, delete_point);

    t_list *node6 = malloc(sizeof(t_list));
    float *data6 = malloc(sizeof(float));
    *data6 = 3.14;
    node6->content = data6;
    node6->next = NULL;

    printf("Test case 6: Deleting a node with floating-point content\n");
    ft_lstdelone(node6, free);

    t_list *node7_1 = malloc(sizeof(t_list));
    t_list *node7_2 = malloc(sizeof(t_list));
    int *data7_1 = malloc(sizeof(int));
    int *data7_2 = malloc(sizeof(int));
    *data7_1 = 123;
    *data7_2 = 456;
    node7_1->content = data7_1;
    node7_2->content = data7_2;
    node7_1->next = node7_2;
    node7_2->next = NULL;

    printf("Test case 7: Deleting multiple nodes in a linked list\n");
    ft_lstdelone(node7_1, delete_int);

    t_list *node8 = malloc(sizeof(t_list));
    Point *data8 = malloc(sizeof(Point));
    data8->x = 10;
    data8->y = 20;
    node8->content = data8;
    node8->next = NULL;

    printf("Test case 8: Deleting a node with a complex structure\n");
    ft_lstdelone(node8, delete_point);

    t_list *node9 = malloc(sizeof(t_list));
    int *data9 = malloc(sizeof(int));
    *data9 = 789;
    node9->content = data9;
    node9->next = NULL;

    printf("Test case 9: Deleting custom node and NULL delete function\n");
    ft_lstdelone(node9, NULL);

    t_list *node10 = malloc(sizeof(t_list));
    int *data10 = malloc(sizeof(int));
    *data10 = 101112;
    node10->content = data10;
    node10->next = NULL;

    printf("Test case 10: Deleting custom node and invalid delete function\n");
    ft_lstdelone(node10, free);

    printf("All test cases passed!\n");
    return 0;
}
*/
